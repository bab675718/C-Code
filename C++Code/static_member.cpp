#include <iostream>
using namespace std;

class Test{
    public:
    static int x;

};
int Test:: x=1;
int main(){
    Test t1,t2;
    cout<<t1.x;
    cout<<Test.x;

    return 0;
}