/*
 * OsTask.h
 *
 *  Created on: Nov 5, 2015
 *      Author: ajn
 */

#ifndef OSTASK_H_
#define OSTASK_H_

#include <pthread.h>

enum OsTaskPrioEt
{
    TASK_PRIO_LOWEST = 1,
    TASK_PRIO_1 = TASK_PRIO_LOWEST,
    TASK_PRIO_2,
    TASK_PRIO_3,
    TASK_PRIO_4,
    TASK_PRIO_5,
    TASK_PRIO_6,
    TASK_PRIO_7,
    TASK_PRIO_8,
    TASK_PRIO_9,
    TASK_PRIO_10,
    TASK_PRIO_11,
    TASK_PRIO_12,
    TASK_PRIO_13,
    TASK_PRIO_14,
    TASK_PRIO_15,
    TASK_PRIO_16,
    TASK_PRIO_17,
    TASK_PRIO_18,
    TASK_PRIO_19,
    TASK_PRIO_20,
    TASK_PRIO_21,
    TASK_PRIO_22,
    TASK_PRIO_23,
    TASK_PRIO_24,
    TASK_PRIO_25,
    TASK_PRIO_26,
    TASK_PRIO_27,
    TASK_PRIO_28,
    TASK_PRIO_29,
    TASK_PRIO_30,
    TASK_PRIO_31,
    TASK_PRIO_32,
    TASK_PRIO_HIGHEST = TASK_PRIO_32
};


extern void *threadEntryWrapper(void *param);


class CObject
{
public:
    virtual void run(){}
};

class OsTask : public CObject
{
public:
	OsTask();
	virtual ~OsTask();
	void start();

private:
	pthread_t m_threadId;

};

#endif /* OSTASK_H_ */
