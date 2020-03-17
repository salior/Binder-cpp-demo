

#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>

#include "helloImp.h"
using namespace hello;

int main(int argc, char *argv[])
{
	printf("just for test\n");
	sp<IServiceManager> sm = defaultServiceManager();
	HelloImp * sp = new HelloImp();
	sm->addService(String16("fce.hello"),sp);

	//Start Service
	ProcessState::self()->startThreadPool();
	//Loop for waiting for request
	IPCThreadState::self()->joinThreadPool();

	return 0;
}
