#ifndef AIDL_GENERATED_FCE_AIDL_TEST_BN_HELLO_SERVICE_H_
#define AIDL_GENERATED_FCE_AIDL_TEST_BN_HELLO_SERVICE_H_

#include <binder/IInterface.h>
#include <fce/aidl/test/IHelloService.h>

namespace fce {

namespace aidl {

namespace test {

class BnHelloService : public ::android::BnInterface<IHelloService> {
public:
status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags = 0) override;
};  // class BnHelloService

}  // namespace test

}  // namespace aidl

}  // namespace fce

#endif  // AIDL_GENERATED_FCE_AIDL_TEST_BN_HELLO_SERVICE_H_
