#pragma once
#include "RG_Task.h"

class consumer : public RG_Task<int>
{
public:
	consumer(RG_Queue<int>* qi) : RG_Task(qi) {}
	~consumer();
	virtual int consumer::svc();
};

