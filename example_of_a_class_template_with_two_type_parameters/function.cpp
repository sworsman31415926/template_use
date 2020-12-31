#include "function.hpp"
#include"iostream"
using namespace std;
template<typename T1,typename T2>
Myclass<T1,T2>::Myclass(T1 a,T2 b)
{
	 x = a;
	 y = b;
}

template<class T1,class T2>
void Myclass<T1,T2>::show()
{
	cout<<"x="<<x<<","<<"y="<<y<<endl;
}
int main()
{
	 Myclass <int,double>m1(12,0.15);               //用类模板定义对象m1,此时T1,T2分别被int、double取代 
	 //Myclass <int,char*>m2(12,"This a test.");      //用类模板定义对象m2,此时T1,T2分别被int,char*取代
	 m1.show();
	 //m2.show();
	 return 0; 
}