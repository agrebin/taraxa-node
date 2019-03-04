// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/transaction.proto
// Original file comments:
//
// @Copyright: Taraxa.io 
// @Author: Chia-Chun Lin 
// @Date: 2019-02-27 18:22:05 
// @Last Modified by: Chia-Chun Lin
// @Last Modified time: 2019-02-28 15:18:29
//
#ifndef GRPC_proto_2ftransaction_2eproto__INCLUDED
#define GRPC_proto_2ftransaction_2eproto__INCLUDED

#include "proto/transaction.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace taraxa_ledger {

class TaraxaLedgerGrpcService final {
 public:
  static constexpr char const* service_full_name() {
    return "taraxa_ledger.TaraxaLedgerGrpcService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SendGrpcTransaction(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::taraxa_ledger::SendGrpcTransactionResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::SendGrpcTransactionResponse>> AsyncSendGrpcTransaction(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::SendGrpcTransactionResponse>>(AsyncSendGrpcTransactionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::SendGrpcTransactionResponse>> PrepareAsyncSendGrpcTransaction(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::SendGrpcTransactionResponse>>(PrepareAsyncSendGrpcTransactionRaw(context, request, cq));
    }
    virtual ::grpc::Status GetGrpcTransaction(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::taraxa_ledger::GrpcTransaction* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::GrpcTransaction>> AsyncGetGrpcTransaction(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::GrpcTransaction>>(AsyncGetGrpcTransactionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::GrpcTransaction>> PrepareAsyncGetGrpcTransaction(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::GrpcTransaction>>(PrepareAsyncGetGrpcTransactionRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void SendGrpcTransaction(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetGrpcTransaction(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::SendGrpcTransactionResponse>* AsyncSendGrpcTransactionRaw(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::SendGrpcTransactionResponse>* PrepareAsyncSendGrpcTransactionRaw(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::GrpcTransaction>* AsyncGetGrpcTransactionRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::taraxa_ledger::GrpcTransaction>* PrepareAsyncGetGrpcTransactionRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SendGrpcTransaction(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::taraxa_ledger::SendGrpcTransactionResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::SendGrpcTransactionResponse>> AsyncSendGrpcTransaction(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::SendGrpcTransactionResponse>>(AsyncSendGrpcTransactionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::SendGrpcTransactionResponse>> PrepareAsyncSendGrpcTransaction(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::SendGrpcTransactionResponse>>(PrepareAsyncSendGrpcTransactionRaw(context, request, cq));
    }
    ::grpc::Status GetGrpcTransaction(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::taraxa_ledger::GrpcTransaction* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::GrpcTransaction>> AsyncGetGrpcTransaction(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::GrpcTransaction>>(AsyncGetGrpcTransactionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::GrpcTransaction>> PrepareAsyncGetGrpcTransaction(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::GrpcTransaction>>(PrepareAsyncGetGrpcTransactionRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SendGrpcTransaction(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response, std::function<void(::grpc::Status)>) override;
      void GetGrpcTransaction(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::SendGrpcTransactionResponse>* AsyncSendGrpcTransactionRaw(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::SendGrpcTransactionResponse>* PrepareAsyncSendGrpcTransactionRaw(::grpc::ClientContext* context, const ::taraxa_ledger::GrpcTransaction& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::GrpcTransaction>* AsyncGetGrpcTransactionRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::taraxa_ledger::GrpcTransaction>* PrepareAsyncGetGrpcTransactionRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendGrpcTransaction_;
    const ::grpc::internal::RpcMethod rpcmethod_GetGrpcTransaction_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SendGrpcTransaction(::grpc::ServerContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response);
    virtual ::grpc::Status GetGrpcTransaction(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SendGrpcTransaction() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendGrpcTransaction(::grpc::ServerContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendGrpcTransaction(::grpc::ServerContext* context, ::taraxa_ledger::GrpcTransaction* request, ::grpc::ServerAsyncResponseWriter< ::taraxa_ledger::SendGrpcTransactionResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetGrpcTransaction() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGrpcTransaction(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetGrpcTransaction(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::taraxa_ledger::GrpcTransaction>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendGrpcTransaction<WithAsyncMethod_GetGrpcTransaction<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SendGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_SendGrpcTransaction() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::taraxa_ledger::GrpcTransaction, ::taraxa_ledger::SendGrpcTransactionResponse>(
          [this](::grpc::ServerContext* context,
                 const ::taraxa_ledger::GrpcTransaction* request,
                 ::taraxa_ledger::SendGrpcTransactionResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->SendGrpcTransaction(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_SendGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendGrpcTransaction(::grpc::ServerContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendGrpcTransaction(::grpc::ServerContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_GetGrpcTransaction() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::taraxa_ledger::GrpcTransaction>(
          [this](::grpc::ServerContext* context,
                 const ::google::protobuf::Empty* request,
                 ::taraxa_ledger::GrpcTransaction* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->GetGrpcTransaction(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_GetGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGrpcTransaction(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void GetGrpcTransaction(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_SendGrpcTransaction<ExperimentalWithCallbackMethod_GetGrpcTransaction<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SendGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SendGrpcTransaction() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendGrpcTransaction(::grpc::ServerContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetGrpcTransaction() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGrpcTransaction(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SendGrpcTransaction() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendGrpcTransaction(::grpc::ServerContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendGrpcTransaction(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetGrpcTransaction() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGrpcTransaction(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetGrpcTransaction(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SendGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_SendGrpcTransaction() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SendGrpcTransaction(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_SendGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendGrpcTransaction(::grpc::ServerContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendGrpcTransaction(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_GetGrpcTransaction() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->GetGrpcTransaction(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_GetGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGrpcTransaction(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void GetGrpcTransaction(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SendGrpcTransaction() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::taraxa_ledger::GrpcTransaction, ::taraxa_ledger::SendGrpcTransactionResponse>(std::bind(&WithStreamedUnaryMethod_SendGrpcTransaction<BaseClass>::StreamedSendGrpcTransaction, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SendGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendGrpcTransaction(::grpc::ServerContext* context, const ::taraxa_ledger::GrpcTransaction* request, ::taraxa_ledger::SendGrpcTransactionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendGrpcTransaction(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::taraxa_ledger::GrpcTransaction,::taraxa_ledger::SendGrpcTransactionResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetGrpcTransaction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetGrpcTransaction() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::google::protobuf::Empty, ::taraxa_ledger::GrpcTransaction>(std::bind(&WithStreamedUnaryMethod_GetGrpcTransaction<BaseClass>::StreamedGetGrpcTransaction, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetGrpcTransaction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetGrpcTransaction(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::taraxa_ledger::GrpcTransaction* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetGrpcTransaction(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::taraxa_ledger::GrpcTransaction>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SendGrpcTransaction<WithStreamedUnaryMethod_GetGrpcTransaction<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SendGrpcTransaction<WithStreamedUnaryMethod_GetGrpcTransaction<Service > > StreamedService;
};

}  // namespace taraxa_ledger


#endif  // GRPC_proto_2ftransaction_2eproto__INCLUDED