//C++ program to print of all 
//prime factors of a number using
//loop

#include<iostream>
#include<math.h>
using namespace std;


void primefactor(int n){
	while(n%2 ==0){
		cout<<"2"<<" ";
		n = n/2;
	}

	for(int i=3;i<sqrt(n);i++){
		while(n%i ==0){
			cout<<i<<" ";
			n = n/i;
		}
	}
	if(n>2){
		cout<<n;
	}
}

int main(){
	int n= 244;
	primefactor(n);

	return 0;
}
