#include <iostream>
using namespace std;

int strstr(string s, string x){
   for(int i=0 ;i<s.length();i++){
    int j;
    for(j=0 ;j<x.length();j++){
        if(s[i+j] != x[j]){
            break;
        }
    }
    if(j==x.length()){
        return i;
    }
   }
    return -1;
}
int main(){
    string s = "GeeksForGeeks";
    string x = "For";

    cout<<strstr(s,x);

    return 0;
}