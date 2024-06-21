#include <iostream>
using namespace std;

void fun2(){
    cout<<"fun2 begins"<<endl;
    throw 100;
}
void fun1(){
    cout<<"fun1 begins"<<endl;
    fun2();
}
int main(){
    try{
        fun1();
    }
    catch(int e1){
        cout<<"Exception cought";
    }


    return 0;
}