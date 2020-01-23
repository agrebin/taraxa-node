#pragma once
#include <algorithm>
#include "ProverWesolowski.h"
#include "libdevcore/CommonData.h"
#include "openssl/bn.h"
#include "types.hpp"
#include "vrf_wrapper.hpp"

namespace taraxa::vdf_sortition {
using namespace vdf;
using namespace vrf_wrapper;
struct VdfMsg : public vrf_wrapper::VrfMsgFace {
  VdfMsg() = default;
  VdfMsg(blk_hash_t last_pbft_hash, uint64_t level)
      : last_pbft_hash(last_pbft_hash), level(level) {}
  std::string toString() const {
    return last_pbft_hash.toString() + "_" + std::to_string(level);
  }
  bool operator==(VdfMsg const& other) const {
    return last_pbft_hash == other.last_pbft_hash && level == other.level;
  }
  friend std::ostream& operator<<(std::ostream& strm, VdfMsg const& vdf_msg) {
    strm << "  [Vdf Msg] " << std::endl;
    strm << "    last_pbft_hash: " << vdf_msg.last_pbft_hash << std::endl;
    strm << "    level: " << vdf_msg.level << std::endl;
    return strm;
  }
  blk_hash_t last_pbft_hash;
  uint64_t level = 0;
};
// It includes a vrf for difficulty adjustment
class VdfSortition : public vrf_wrapper::VrfSortitionBase {
 public:
  VdfSortition() = default;
  VdfSortition(vrf_sk_t const& sk, VdfMsg const& vdf_msg,
               uint difficulty_bound = 29, uint lambda_bits = 13)
      : vdf_msg_(vdf_msg),
        difficulty_bound_(difficulty_bound),
        lambda_bits_(lambda_bits),
        VrfSortitionBase(sk, vdf_msg) {}
  VdfSortition(bytes const& b);

  bool verify(std::string const& msg) { return verifyVdfSolution(msg); }
  void computeVdfSolution(std::string const& msg);
  bytes rlp() const;
  bool operator==(VdfSortition const& other) const {
    return pk == other.pk && vdf_msg_ == other.vdf_msg_ &&
           proof == other.proof && output == other.output &&
           vdf_sol_.first == other.vdf_sol_.first &&
           vdf_sol_.second == other.vdf_sol_.second;
  }
  bool operator!=(VdfSortition const& other) const {
    return !operator==(other);
  }
  void setDifficultyBound(uint bound) {
    difficulty_bound_ = std::min(100u, std::max(10u, bound));
  }
  void setLambdaBits(uint bits) {
    lambda_bits_ = std::min(10u, std::max(16u, bits));
  }
  virtual std::ostream& print(std::ostream& strm) const override {
    VrfSortitionBase::print(strm);
    strm << vdf_msg_ << std::endl;
    strm << " Lambda: " << getLambda() << std::endl;
    strm << " Difficulty: " << getDifficulty() << std::endl;
    strm << " Computation Time: " << vdf_computation_time_ << std::endl;
    strm << " Sol1: " << dev::toHex(vdf_sol_.first) << std::endl;
    strm << " Sol2: " << dev::toHex(vdf_sol_.second) << std::endl;
    return strm;
  }
  friend std::ostream& operator<<(std::ostream& strm, VdfSortition const& vdf) {
    return vdf.print(strm);
  }
  auto getComputationTime() const { return vdf_computation_time_; }
  int getDifficulty() const;
  unsigned long getLambda() const;

 private:
  inline static dev::bytes N = dev::asBytes(
      "3d1055a514e17cce1290ccb5befb256b00b8aac664e39e754466fcd631004c9e23d16f23"
      "9aee2a207e5173a7ee8f90ee9ab9b6a745d27c6e850e7ca7332388dfef7e5bbe6267d1f7"
      "9f9330e44715b3f2066f903081836c1c83ca29126f8fdc5f5922bf3f9ddb4540171691ac"
      "cc1ef6a34b2a804a18159c89c39b16edee2ede35");
  bool verifyVrf() { return VrfSortitionBase::verify(vdf_msg_); }
  // use first byte as difficult for now
  bool verifyVdfSolution(std::string const& msg);
  VdfMsg vdf_msg_;
  std::pair<bytes, bytes> vdf_sol_;
  unsigned long vdf_computation_time_ = 0;
  uint difficulty_bound_ = 29;
  uint lambda_bits_ = 13;
};
}  // namespace taraxa::vdf_sortition