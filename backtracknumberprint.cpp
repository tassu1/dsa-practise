#include<iostream>
using namespace std;
void backtracknum(int n,int i){
	if(i<1){
		return ;
	}
	backtracknum(n,i-1);
	cout<<i<<" ";
}
int main(){
	int n;
	cout<<"ENTER THE LAST LIMIT WHERE U WANT TO STOP THE COUNTING  ";
	cin>>n;
	backtracknum(n,n);
	return 0;
}
