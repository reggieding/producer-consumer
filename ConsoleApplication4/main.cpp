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
	system("pause");
}
