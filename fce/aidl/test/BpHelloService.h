#ifndef AIDL_GENERATED_FCE_AIDL_TEST_BP_HELLO_SERVICE_H_
#define AIDL_GENERATED_FCE_AIDL_TEST_BP_HELLO_SERVICE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <fce/aidl/test/IHelloService.h>

namespace fce {

namespace aidl {

namespace test {

class BpHelloService : public ::android::BpInterface<IHelloService> {
public:
explicit BpHelloService(const ::android::sp<::android::IBinder>& _aidl_impl);
virtual ~BpHelloService() = default;
::android::binder::Status hello(int32_t param) override;
::android::binder::Status registerCb(const ::android::sp<::fce::aidl::test::IHelloCallback>& cb) override;
::android::binder::Status RepeatSimpleParcelable(const ::fce::aidl::test::SimpleParcelable& input, ::fce::aidl::test::SimpleParcelable* repeat, ::fce::aidl::test::SimpleParcelable* _aidl_return) override;
};  // class BpHelloService

}  // namespace test

}  // namespace aidl

}  // namespace fce

#endif  // AIDL_GENERATED_FCE_AIDL_TEST_BP_HELLO_SERVICE_H_
