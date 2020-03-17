
#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
using namespace android;

#include "IHelloService.h"
#include "BnHelloCallback.h"

using namespace fce::aidl::test;
using android::binder::Status;
namespace hello
{
class HelloCallback : public BnHelloCallback
{
	public:
		Status onData(int data);
};

Status HelloCallback::onData(int data)
{
	printf("recive callback st = %d\n",data);
    return Status::ok();
}
}


using namespace hello;

int main(int argc, char *argv[])
{
	
	sp<IServiceManager> sm = defaultServiceManager();
	sp<IBinder> binder;
	sp<IHelloService> helloservice;
	
	binder = sm->getService(String16("fce.hello"));
	helloservice = interface_cast<IHelloService>(binder);

	if( helloservice.get() == NULL )
	{
		printf("[%s:%d] IHelloService proxy object is still NULL!\n", __FUNCTION__, __LINE__);
		return -1;
	}
	
	sp<IHelloCallback> cb = new HelloCallback();
	
	//Start Service
	ProcessState::self()->startThreadPool();

	helloservice->registerCb(cb);
	
	int count = 0;
	while(true)
	{
		printf("say hello to service %d ~ \n",count);
		helloservice->hello(count++);
		sleep(2);
	}
	return 0;
}

