#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <binder/IServiceManager.h>

#include "helloImp.h"
using namespace hello;

HelloImp::HelloImp()
{

}

Status HelloImp::hello(int param)
{
	printf("hello ~~~ %d \n",param);
	if (callback!=NULL)
		callback->onData(param + 10);
	return Status::ok();
}

Status HelloImp::registerCb(const sp<IHelloCallback>& cb)
{
	callback = cb;
	return Status::ok();
}

Status HelloImp::RepeatSimpleParcelable(const SimpleParcelable& input, SimpleParcelable* repeat, SimpleParcelable* _aidl_return)
{
    return Status::ok();
}
