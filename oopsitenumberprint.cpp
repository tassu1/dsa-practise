#include<iostream>
using namespace std;
void oppsnumprint(int n,int i){
	if(i<1){
		return ;
	}
	cout<<i<<" ";
	oppsnumprint(n,i-1);
}
int main(){
	int n;
	cout<<"ENTER THE LAST LIMIT FROM WHERE YOU WANT THE REVERSE COUNTING  ";
	cin>>n;
	oppsnumprint(n,n);
	return 0;
}
