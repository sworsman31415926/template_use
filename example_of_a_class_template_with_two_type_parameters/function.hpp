#include"iostream"
using namespace std;
template<class T1,class T2>                    //声明模板，具有T1,T2两个类型参数 
class Myclass
{                                 //定义模板类Myclass 
  public:
     Myclass(T1 a,T2 b);
     void show();
  private:
     T1 x;
     T2 y;
};

