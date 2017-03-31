#include "producer.h"

//producer::producer(RG_Queue<int> *qi)
//{
//}


producer::~producer()
{
}

int producer::svc() {
	int i = 5;
	while (1)
	{
		//ÈûÈëÊý¾Ý
		i++;
		this->pushq(i);
		printf("%d\n",i);
		boost::this_thread::sleep(boost::posix_time::seconds(1));
	}
	return 0;
}
