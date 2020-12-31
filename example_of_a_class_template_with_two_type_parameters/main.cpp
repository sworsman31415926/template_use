/*
$ g++ function.cpp main.cpp
/usr/lib/gcc/x86_64-pc-cygwin/10/../../../../x86_64-pc-cygwin/bin/ld: /tmp/cctgUJH6.o:main.cpp:(.text+0x26): undefined reference to `Myclass<int, double>::Myclass(int, double)'
/tmp/cctgUJH6.o:main.cpp:(.text+0x26): relocation truncated to fit: R_X86_64_PC32 against undefined symbol `Myclass<int, double>::Myclass(int, double)'
/usr/lib/gcc/x86_64-pc-cygwin/10/../../../../x86_64-pc-cygwin/bin/ld: /tmp/cctgUJH6.o:main.cpp:(.text+0x32): undefined reference to `Myclass<int, double>::show()'
/tmp/cctgUJH6.o:main.cpp:(.text+0x32): relocation truncated to fit: R_X86_64_PC32 against undefined symbol `Myclass<int, double>::show()'
collect2: error: ld returned 1 exit status
*/
/*
二零一五:
g++ function.cpp main.cpp

二零一五:
如果main函数现在function.cpp中，用g++ function.cpp编译就没问题

二零一五:
只要使用到模板的话，就会出现这样的问题

*/
/*
g++ function.cpp main.cpp//build error
g++ function.cpp //build ok
*/
#include"function.hpp"
#include"iostream"
using namespace std;
int main()
{
 Myclass <int,double>m1(12,0.15);               //用类模板定义对象m1,此时T1,T2分别被int、double取代 
 //Myclass <int,char*>m2(12,"This a test.");      //用类模板定义对象m2,此时T1,T2分别被int,char*取代

 m1.show();
 //m2.show();
 
 return 0; 
}
/*
程序运行结果是：
x=12,y=0.15
x=12,y=This a test. 
*/