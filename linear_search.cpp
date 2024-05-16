#include<iostream>
using namespace std;

void linear_search(int n, int list[],int k){
    for(int i=0;i<n;i++){
        if(list[i]==k){
            cout<<"found the search element at position"<< i<<endl;
        }
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of list: ";
    cin>>n;

    int list[n];

    cout<<"Enter list elements: ";
    for(int i=0;i<n;i++){
        cin>>list[i];
    }

    int k;
    cout<<"Enter search element: ";
    cin>>k;

    linear_search(n,list,k);


    return 0;
}