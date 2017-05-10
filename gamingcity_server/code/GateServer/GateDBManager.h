#pragma once

#include "DBConnectionPool.h"
#include "Singleton.h"
#include "common_msg_define.pb.h"

/**********************************************************************************************//**
 * \class	GateDBManager
 *
 * \brief	Manager for databases.
 **************************************************************************************************/

#if 0
class GateDBManager : public TSingleton<GateDBManager>
{
public:

	/**********************************************************************************************//**
	 * \brief	Default constructor.
	 **************************************************************************************************/

	GateDBManager();

	/**********************************************************************************************//**
	 * \brief	Destructor.
	 **************************************************************************************************/

	virtual ~GateDBManager();

	/**********************************************************************************************//**
	 * \brief	�������ݿ��̲߳�����.
	 **************************************************************************************************/

	void run();

	/**********************************************************************************************//**
	 * \brief	�ȴ��߳̽���.
	 **************************************************************************************************/

	void join();

	/**********************************************************************************************//**
	 * \brief	����ر�.
	 **************************************************************************************************/

	void stop();

	/**********************************************************************************************//**
	 * \brief	ÿһ֡����.
	 **************************************************************************************************/

	virtual void tick();

	/**********************************************************************************************//**
	 * \brief	�õ�config���ݿ�.
	 *
	 * \return	The database connection account.
	 **************************************************************************************************/

	DBConnectionPool& get_db_connection_config() { return db_connection_config_; }

protected:
	DBConnectionPool							db_connection_config_;
};

#endif