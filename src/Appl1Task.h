/*
 * Appl1Task.h
 *
 *  Created on: Nov 5, 2015
 *      Author: ajn
 */

#ifndef APPL1TASK_H_
#define APPL1TASK_H_

#include "OsTask.h"

class Appl1Task:public OsTask
{
public:
    Appl1Task();
    virtual ~Appl1Task();

    void run();
};

#endif /* APPL1TASK_H_ */
