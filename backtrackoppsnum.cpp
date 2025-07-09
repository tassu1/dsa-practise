#include<iostream>
using namespace std;
void backtrackoppsnum(int n,int i){
	if(i>n){
		return;
	}
	backtrackoppsnum(n,i+1);
	cout<<i<<" ";
}
int main(){
	int n;
	cout<<"ENTER THE LAST LIMIT FROM WHERE YOU WANT TO REVERSE THE COUNTING  ";
	cin>>n;
	backtrackoppsnum(n,1);
	return 0;
}
