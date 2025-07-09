#include<iostream>
using namespace std;
void add(int i,int sum,int n){
	
	if(i<1){
		cout<<" Addition of first "<<n<<" number is "<<sum;
		return;
	}
	add(i-1,sum+i,nn);
}
int main(){
	int num;
	cout<<" Enter the natural number for which u want the sum of n natural number  ";
	cin>>num;
	add(num,0,num);
	return 0;
}
