/*
Cy AIDL TEST
*/

package fce.aidl.test;

import fce.aidl.test.IHelloCallback;
import fce.aidl.test.SimpleParcelable;

interface IHelloService {
    void hello(int param);
    void registerCb(IHelloCallback cb);
    SimpleParcelable RepeatSimpleParcelable(in SimpleParcelable input,
                                          out SimpleParcelable repeat);    
}
