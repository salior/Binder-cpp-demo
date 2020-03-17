#include <fce/aidl/test/IHelloService.h>
#include <fce/aidl/test/BpHelloService.h>
using namespace android;
namespace fce {

namespace aidl {

namespace test {

IMPLEMENT_META_INTERFACE(HelloService, "fce.aidl.test.IHelloService")

}  // namespace test

}  // namespace aidl

}  // namespace fce
#include <fce/aidl/test/BpHelloService.h>
#include <binder/Parcel.h>

namespace fce {

namespace aidl {

namespace test {

BpHelloService::BpHelloService(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IHelloService>(_aidl_impl){
}

::android::binder::Status BpHelloService::hello(int32_t param) {
::android::Parcel _aidl_data;
::android::Parcel _aidl_reply;
status_t _aidl_ret_status = ::android::OK;
::android::binder::Status _aidl_status;
_aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = _aidl_data.writeInt32(param);
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = remote()->transact(IHelloService::HELLO, _aidl_data, &_aidl_reply);
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

::android::binder::Status BpHelloService::registerCb(const ::android::sp<::fce::aidl::test::IHelloCallback>& cb) {
::android::Parcel _aidl_data;
::android::Parcel _aidl_reply;
status_t _aidl_ret_status = ::android::OK;
::android::binder::Status _aidl_status;
_aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = _aidl_data.writeStrongBinder(::fce::aidl::test::IHelloCallback::asBinder(cb));
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = remote()->transact(IHelloService::REGISTERCB, _aidl_data, &_aidl_reply);
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

::android::binder::Status BpHelloService::RepeatSimpleParcelable(const ::fce::aidl::test::SimpleParcelable& input, ::fce::aidl::test::SimpleParcelable* repeat, ::fce::aidl::test::SimpleParcelable* _aidl_return) {
::android::Parcel _aidl_data;
::android::Parcel _aidl_reply;
status_t _aidl_ret_status = ::android::OK;
::android::binder::Status _aidl_status;
_aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = _aidl_data.writeParcelable(input);
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = remote()->transact(IHelloService::REPEATSIMPLEPARCELABLE, _aidl_data, &_aidl_reply);
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
_aidl_ret_status = _aidl_reply.readParcelable(_aidl_return);
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_ret_status = _aidl_reply.readParcelable(repeat);
if (((_aidl_ret_status) != (::android::OK))) {
goto _aidl_error;
}
_aidl_error:
_aidl_status.setFromStatusT(_aidl_ret_status);
return _aidl_status;
}

}  // namespace test

}  // namespace aidl

}  // namespace fce
#include <fce/aidl/test/BnHelloService.h>
#include <binder/Parcel.h>

namespace fce {

namespace aidl {

namespace test {

status_t BnHelloService::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
status_t _aidl_ret_status = ::android::OK;
switch (_aidl_code) {
case Call::HELLO:
{
int32_t in_param;
if (!(_aidl_data.checkInterface(this))) {
_aidl_ret_status = ::android::BAD_TYPE;
break;
}
_aidl_ret_status = _aidl_data.readInt32(&in_param);
if (((_aidl_ret_status) != (::android::OK))) {
break;
}
::android::binder::Status _aidl_status(hello(in_param));
_aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
if (((_aidl_ret_status) != (::android::OK))) {
break;
}
if (!_aidl_status.isOk()) {
break;
}
}
break;
case Call::REGISTERCB:
{
::android::sp<::fce::aidl::test::IHelloCallback> in_cb;
if (!(_aidl_data.checkInterface(this))) {
_aidl_ret_status = ::android::BAD_TYPE;
break;
}
_aidl_ret_status = _aidl_data.readStrongBinder(&in_cb);
if (((_aidl_ret_status) != (::android::OK))) {
break;
}
::android::binder::Status _aidl_status(registerCb(in_cb));
_aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
if (((_aidl_ret_status) != (::android::OK))) {
break;
}
if (!_aidl_status.isOk()) {
break;
}
}
break;
case Call::REPEATSIMPLEPARCELABLE:
{
::fce::aidl::test::SimpleParcelable in_input;
::fce::aidl::test::SimpleParcelable out_repeat;
::fce::aidl::test::SimpleParcelable _aidl_return;
if (!(_aidl_data.checkInterface(this))) {
_aidl_ret_status = ::android::BAD_TYPE;
break;
}
_aidl_ret_status = _aidl_data.readParcelable(&in_input);
if (((_aidl_ret_status) != (::android::OK))) {
break;
}
::android::binder::Status _aidl_status(RepeatSimpleParcelable(in_input, &out_repeat, &_aidl_return));
_aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
if (((_aidl_ret_status) != (::android::OK))) {
break;
}
if (!_aidl_status.isOk()) {
break;
}
_aidl_ret_status = _aidl_reply->writeParcelable(_aidl_return);
if (((_aidl_ret_status) != (::android::OK))) {
break;
}
_aidl_ret_status = _aidl_reply->writeParcelable(out_repeat);
if (((_aidl_ret_status) != (::android::OK))) {
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
