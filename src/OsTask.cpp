/*
 * OsTask.cpp
 *
 *  Created on: Nov 5, 2015
 *      Author: ajn
 */

#include "OsTask.h"


/************************************************************************
 *
 * Function:        TaskEntryWrapper()
 *
 * Description:
 *
 *
 ************************************************************************/
void *TaskEntryWrapper(void *param)
{
    CObject *obj = (CObject *) param;
    obj->run();

    return NULL;
}


/************************************************************************
 *
 * Function:        OsTask()
 *
 * Description:
 *
 *
 ************************************************************************/
OsTask::OsTask()
{
	// TODO Auto-generated constructor stub

}

/************************************************************************
 *
 * Function:        ~OsTask()
 *
 * Description:
 *
 *
 ************************************************************************/
OsTask::~OsTask()
{
	// TODO Auto-generated destructor stub
}

/************************************************************************
 *
 * Function:        start()
 *
 * Description: This function starts the thread
 *
 *
 ************************************************************************/
void OsTask::start()
{
    pthread_attr_t attr;
    struct

}

