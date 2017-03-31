#pragma once
#include "RG_Queue.h"
#include "boost\thread.hpp"

template <class type>
class RG_Task
{
public:
	//RG_Task(RG_Queue<type>* qi);

	RG_Task<type>::RG_Task(RG_Queue<type>* qi)
	{
		q = qi;
	}

	~RG_Task() {}
	virtual int svc() {
		return 0; 
	}
	int pushq(type qi) { 
		q->push(qi);
		return 0; 
	}
	int popq(type & qi) {
		q->pop(qi);
		return 0; 
	}

	//Æô¶¯Ïß³Ì
	int active() {
		boost::function0<void> f = boost::bind(&RG_Task::svc, this);
		boost::thread thd(f);
		return 0;
	}


private:
	RG_Queue<type>* q;
};

