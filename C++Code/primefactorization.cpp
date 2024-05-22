#include<iostream>
using namespace std;

bool isPrime(int n);
void primefactor(int n);
int main(){
   int n;
   cout<<"Enter Number: ";
   cin>>n;

   primefactor(n);

return 0;
}

bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i ==0){
			return false;
		}
	}
	return true;
}

void primefactor(int n){
	for(int i=2;i<=n;i++){
		if(isPrime(n)){
			int x =i;
			while(x%i ==0){
				cout<<i<<" ";
				x = x*i;
			}
		}
	}
}
