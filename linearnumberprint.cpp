#include<iostream>
using namespace std;
void numbprint(int n,int i){
	if(i>n){
		return;
	}
	cout<<i<<" ";
	numbprint(n,i+1);
}
int main(){
	int n;
	cout<<" ENTER THE LAST LIMIT WHERE U WANT TO STOP THE COUNTING  ";
	cin>>n;
	numbprint(n,1);
	return 0;
}
