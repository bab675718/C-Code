#include<iostream>
using namespace std;

int isDistinct(int arr[] , int size){
	int count =0;
	bool isDistinct = true;

	for(int i=0 ; i<size ;i++){
		isDistinct = true;
		for(int j= i-1 ;j>=0 ; j--){
			if(arr[i] == arr[j]){
				isDistinct = false;
				break;
			}
		}
		if(isDistinct==true){
			count++;
		}
	}
	return count;
}
			
int main(){
	int arr[] = {10 , 20 ,10 ,49};
	int size = sizeof(arr)/sizeof(arr[0]);

	cout<<isDistinct(arr , size);

	return 0;
}
