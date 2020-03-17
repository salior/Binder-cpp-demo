#ifndef AIDL_GENERATED_FCE_AIDL_TEST_BN_HELLO_CALLBACK_H_
#define AIDL_GENERATED_FCE_AIDL_TEST_BN_HELLO_CALLBACK_H_

#include <binder/IInterface.h>
#include <fce/aidl/test/IHelloCallback.h>

namespace fce {

namespace aidl {

namespace test {

class BnHelloCallback : public ::android::BnInterface<IHelloCallback> {
public:
status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags = 0) override;
};  // class BnHelloCallback

}  // namespace test

}  // namespace aidl

}  // namespace fce

#endif  // AIDL_GENERATED_FCE_AIDL_TEST_BN_HELLO_CALLBACK_H_
