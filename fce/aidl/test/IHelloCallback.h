#ifndef AIDL_GENERATED_FCE_AIDL_TEST_I_HELLO_CALLBACK_H_
#define AIDL_GENERATED_FCE_AIDL_TEST_I_HELLO_CALLBACK_H_

#include <Status.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace fce {

namespace aidl {

namespace test {

class IHelloCallback : public ::android::IInterface {
public:
DECLARE_META_INTERFACE(HelloCallback)
virtual ::android::binder::Status onData(int32_t data) = 0;
enum Call {
  ONDATA = ::android::IBinder::FIRST_CALL_TRANSACTION + 0,
};
};  // class IHelloCallback

}  // namespace test

}  // namespace aidl

}  // namespace fce

#endif  // AIDL_GENERATED_FCE_AIDL_TEST_I_HELLO_CALLBACK_H_
