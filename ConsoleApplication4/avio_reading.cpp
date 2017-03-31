#include "producer.h"
#include "consumer.h"

void main() {
	//创建消息队列
	RG_Queue<int> q;
	//创建生产者和消费者，它们使用同一消息消息队列，只有这样才能实现线程间的消息传递
	producer producer(&q);
	consumer consumer(&q);
	//调用active启动生产者消费线程
	producer.active();
	//调用active启动消费者线程
	consumer.active();
	//调用wait等待线程结束

}


/*
class compare_class
{
public:
	bool operator()(int A)const { 
		printf("%d", A);
		return true; }
};

void main() {
	boost::lockfree::queue <int, boost::lockfree::fixed_sized<false>> q(2);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	int value = 0;
	while (!q.empty()) {
		//q.pop(value);
		
		compare_class c;
		q.consume_one(c);
		
		//printf("%d\n", value);
	}
	
	getchar();
}
*/