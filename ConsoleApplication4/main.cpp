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
	system("pause");
}
