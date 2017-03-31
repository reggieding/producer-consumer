#pragma once
#include "boost/lockfree/spsc_queue.hpp"

#define RawQueueLen 2048


//��װ��boost�������еĵ�ģ����
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
