#include "producer.h"
#include "consumer.h"

void main() {
	//������Ϣ����
	RG_Queue<int> q;
	//���������ߺ������ߣ�����ʹ��ͬһ��Ϣ��Ϣ���У�ֻ����������ʵ���̼߳����Ϣ����
	producer producer(&q);
	consumer consumer(&q);
	//����active���������������߳�
	producer.active();
	//����active�����������߳�
	consumer.active();
	//����wait�ȴ��߳̽���

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