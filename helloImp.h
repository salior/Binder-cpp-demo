#ifndef __HELLO_IMP_H
#define __HELLO_IMP_H

using namespace android;
#include "BnHelloService.h"
#include "IHelloCallback.h"
using namespace fce::aidl::test;

using android::binder::Status;
namespace hello
{
	class HelloImp :public BnHelloService
	{
		public:
			HelloImp();
			Status hello(int param);
			Status registerCb(const sp<IHelloCallback>& cb);      
            Status RepeatSimpleParcelable(const SimpleParcelable& input, SimpleParcelable* repeat, SimpleParcelable* _aidl_return);
		private:
			sp<IHelloCallback>  callback;
	};
}
#endif //#ifndef __HELLO_IMP_H