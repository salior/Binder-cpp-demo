#include <fce/aidl/test/IHelloCallback.h>
#include <fce/aidl/test/BpHelloCallback.h>
using namespace android;
namespace fce {

namespace aidl {

namespace test {

IMPLEMENT_META_INTERFACE(HelloCallback, "fce.aidl.test.IHelloCallback")

}  // namespace test

}  // namespace aidl

}  // namespace fce
#include <fce/aidl/test/BpHelloCallback.h>
#include <binder/Parcel.h>

namespace fce {

namespace aidl {

namespace test {

BpHelloCallback::BpHelloCallback(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IHelloCallback>(_aidl_impl){
}

::android::binder::Status BpHelloCallback::onData(int32_t data) {
::android::Parcel _aidl_data;
::android::Parcel _aidl_reply;
status_t _aidl_ret_status = ::android::OK;
::android::binder::Status _aidl_status;
_aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = _aidl_data.writeInt32(data);
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = remote()->transact(IHelloCallback::ONDATA, _aidl_data, &_aidl_reply);
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
if (!_aidl_status.isOk()) {
return _aidl_status;
}
_aidl_error:
_aidl_status.setFromStatusT(_aidl_ret_status);
return _aidl_status;
}

}  // namespace test

}  // namespace aidl

}  // namespace fce
#include <fce/aidl/test/BnHelloCallback.h>
#include <binder/Parcel.h>

namespace fce {

namespace aidl {

namespace test {

status_t BnHelloCallback::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
status_t _aidl_ret_status = ::android::OK;
switch (_aidl_code) {
case Call::ONDATA:
{
int32_t in_data;
if (!(_aidl_data.checkInterface(this))) {
_aidl_ret_status = ::android::BAD_TYPE;
break;
}
_aidl_ret_status = _aidl_data.readInt32(&in_data);
if (((_aidl_ret_status) != (::android::OK))) {
break;
}
::android::binder::Status _aidl_status(onData(in_data));
_aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
if (((_aidl_ret_status) != (::android::OK))) {
break;
}
if (!_aidl_status.isOk()) {
break;
}
}
break;
default:
{
_aidl_ret_status = ::android::BBinder::onTransact(_aidl_code, _aidl_data, _aidl_reply, _aidl_flags);
}
break;
}
if (_aidl_ret_status == ::android::UNEXPECTED_NULL) {
_aidl_ret_status = ::android::binder::Status::fromExceptionCode(::android::binder::Status::EX_NULL_POINTER).writeToParcel(_aidl_reply);
}
return _aidl_ret_status;
}

}  // namespace test

}  // namespace aidl

}  // namespace fce
