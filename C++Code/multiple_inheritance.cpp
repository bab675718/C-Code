#include <iostream>
using namespace std;

class A{
    public:
    int x;
};
class B: virtual public A{
    public:
    int y;
};

class C:virtual public A{};

class D:public B,public C{};

int main(){
    D d1;
    cout<<d1.x;


    return 0;
}