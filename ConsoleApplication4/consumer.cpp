#include "consumer.h"

consumer::~consumer()
{
}

int consumer::svc() {
	int i = 0;
	while (1) {
		this->popq(i);
		printf("%d\n",i);
		boost::this_thread::sleep(boost::posix_time::seconds(1));
	}
	return 0;
}