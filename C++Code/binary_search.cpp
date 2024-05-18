#include<iostream>
using namespace std;

void binary_search(int n, int list[],int k){
    int first=0,last=n-1,mid =0;
    while(first<last){
        mid = (first+last)/2;
 
        if(list[mid]=k){
            cout<<"element is present";
        }
        else if(list[mid]>k){
            last = mid -1;
        }
        else{
            first = mid +1;
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of list: ";
    cin>>n;

    int list[n];
    cout<<"Enter list elements: ";
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    int k;
    cout<<"Enter search element in the list: ";
    cin>>k;

    binary_search(n,list,k);

    return 0;
}