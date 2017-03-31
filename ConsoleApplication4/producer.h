#pragma once

#include "RG_Task.h"
#include "RG_Queue.h"

class producer : public RG_Task<int>
{
public:
	producer(RG_Queue<int> *qi) : RG_Task<int>(qi) {}
	~producer();
	virtual int svc();
};

