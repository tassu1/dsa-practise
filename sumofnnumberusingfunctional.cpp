#include<iostream>
using namespace std;
int sum(int n){
	if(n==0){
		return 0;
	}else{
		return n+sum(n-1);
	}
}
int main(){
	int n;
	cout<<"ENTER THE NUMBER TO GET THE SUM OF N NUMBERS  ";
	cin>>n;
	cout<<sum(n);
	return 0;
}
