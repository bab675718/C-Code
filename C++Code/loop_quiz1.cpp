//Here are some infinite for loops 

#include<iostream>
using namespace std;

int main(){

	//when we put ; after the for loop
	//It becomes infinite loop
	for(int i=0;i<5;i++);
	{
		cout<<i<<endl;
	}
	// when we put condition that not matches 
	for(int i=1; i!=10 ;i=i+2){
		cout<<i<<endl;
	}
	//when we didn't give initialization condition , testing condition and updattion condition
	for( ; ;){
		cout<<"Arbab"<<endl;
	}
	return 0;
}
