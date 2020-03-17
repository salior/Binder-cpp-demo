# Binder-cpp-demo
这个项目是一个Binder服务的cpp展示例子。
源于在Linux系统需要用到Android Binder，所有语言实现用C++实现。
这个例子，起于aidl的接口文件，采用aidl-cpp来直接生成Bp，Bn文件，再基于这个基础，编写了service和client，放在AndroidP的编译环境里编译通过，运行结果如下：

服务端：
```
./helloService
just for test
hello ~~~ 0
hello ~~~ 1
hello ~~~ 2
```

客户端：
```
./helloClient
say hello to service 0 ~
recive callback st = 10
say hello to service 1 ~
recive callback st = 11
say hello to service 2 ~
recive callback st = 12
```

在纯Linux上，要对binder进行移植，再此基础上编译实验，也是可以的。