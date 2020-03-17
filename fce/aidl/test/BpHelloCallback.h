#ifndef AIDL_GENERATED_FCE_AIDL_TEST_BP_HELLO_CALLBACK_H_
#define AIDL_GENERATED_FCE_AIDL_TEST_BP_HELLO_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <fce/aidl/test/IHelloCallback.h>

namespace fce {

namespace aidl {

namespace test {

class BpHelloCallback : public ::android::BpInterface<IHelloCallback> {
public:
explicit BpHelloCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
virtual ~BpHelloCallback() = default;
::android::binder::Status onData(int32_t data) override;
};  // class BpHelloCallback

}  // namespace test

}  // namespace aidl

}  // namespace fce

#endif  // AIDL_GENERATED_FCE_AIDL_TEST_BP_HELLO_CALLBACK_H_
