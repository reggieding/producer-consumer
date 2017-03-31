#pragma once
#include "boost/lockfree/spsc_queue.hpp"

#define RawQueueLen 2048


//封装了boost无锁队列的的模板类
template <class type>
class RG_Queue
{
public:
	//int open();
	RG_Queue() {
		
	}
	~RG_Queue() {}
	void push(type v) { q.push(v); }
	void pop(type& v) { q.pop(v); }
private:
	boost::lockfree::spsc_queue<type, boost::lockfree::capacity<RawQueueLen>> q;
};
