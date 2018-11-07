/*
 * @Copyright: Taraxa.io 
 * @Author: Chia-Chun Lin 
 * @Date: 2018-11-02 14:19:58 
 * @Last Modified by: Chia-Chun Lin
 * @Last Modified time: 2018-11-02 17:44:34
 */
 
#ifndef FULL_NODE_HPP
#define FULL_NODE_HPP

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <boost/asio.hpp>
#include <boost/thread.hpp>
#include <boost/lexical_cast.hpp>
#include "rocks_db.hpp"
#include "tcp_server.hpp"
#include "tcp_client.hpp"

using namespace std;
class FullNode{
public:
	FullNode(string server_addr, unsigned short server_port, string db_accounts_path, string db_blocks_path):
		server_addr_(server_addr),
		server_port_(server_port),
		db_accounts_path_(db_accounts_path),
		db_blocks_path_(db_blocks_path),
		db_accounts_(std::make_shared<RocksDb> (db_accounts_path_)),
		db_blocks_(std::make_shared<RocksDb>(db_blocks_path_)){
		listen();
	}
	void setVerbose(bool verbose){
		verbose_=verbose;
		tcp_server_.setVerbose(verbose);
		tcp_client_.setVerbose(verbose);
	}
	void createAccount(unsigned idx, unsigned long init_balance);
	void addRemotes(string ip, unsigned port){
		remotes_.push_back({ip, port});
	}
	void listen(){ 
		boost::thread(boost::bind(&TcpServer::listen, &tcp_server_, server_addr_, server_port_, false /*echo*/));
	}
	void sendBlock(unsigned from, unsigned to, unsigned long new_balance);
private:
	string server_addr_ = "192.168.12.204";
	unsigned short server_port_ = 3000;
	string db_accounts_path_ = "tmp/myAccountsDB";
	string db_blocks_path_ = "tmp/myblocksDB";
	std::shared_ptr<RocksDb> db_accounts_;
	std::shared_ptr<RocksDb> db_blocks_;
	TcpServer tcp_server_;
	TcpClient tcp_client_;
	vector<pair<string, unsigned>> remotes_; // neighbors for broadcasting
	bool verbose_=false;
};
#endif