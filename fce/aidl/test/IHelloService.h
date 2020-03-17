#ifndef AIDL_GENERATED_FCE_AIDL_TEST_I_HELLO_SERVICE_H_
#define AIDL_GENERATED_FCE_AIDL_TEST_I_HELLO_SERVICE_H_

#include <Status.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <cstdint>
#include <fce/aidl/test/IHelloCallback.h>
#include <simple_parcelable.h>
#include <utils/StrongPointer.h>

namespace fce {

namespace aidl {

namespace test {

class IHelloService : public ::android::IInterface {
public:
DECLARE_META_INTERFACE(HelloService)
virtual ::android::binder::Status hello(int32_t param) = 0;
virtual ::android::binder::Status registerCb(const ::android::sp<::fce::aidl::test::IHelloCallback>& cb) = 0;
virtual ::android::binder::Status RepeatSimpleParcelable(const ::fce::aidl::test::SimpleParcelable& input, ::fce::aidl::test::SimpleParcelable* repeat, ::fce::aidl::test::SimpleParcelable* _aidl_return) = 0;
enum Call {
  HELLO = ::android::IBinder::FIRST_CALL_TRANSACTION + 0,
  REGISTERCB = ::android::IBinder::FIRST_CALL_TRANSACTION + 1,
  REPEATSIMPLEPARCELABLE = ::android::IBinder::FIRST_CALL_TRANSACTION + 2,
};
};  // class IHelloService

}  // namespace test

}  // namespace aidl

}  // namespace fce

#endif  // AIDL_GENERATED_FCE_AIDL_TEST_I_HELLO_SERVICE_H_
