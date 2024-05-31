#include<iostream>
using namespace std;

int main(){
	int arr[] = {2,-1,0,3,5};
	
	for(const auto $x :arr){
		cout<<$x <<" ";
	}

	return 0;
}
