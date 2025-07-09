#include<iostream>
using namespace std;
void name(int n, string na,int i){
	
    if(i>n){
    	return ;
	}
	cout<<na<<endl;
	
	name( n , na,i+1);
}
int main(){
   string nam;
    cout<<" ENTER YOUR NAME PLS  ";
    cin>>nam;
    int n;
    cout<<"ENTER THE NUMBER HOW MANY TIME YOU WANT TO PRINT YOUR NAME  ";
    cin>>n;
   name(n,nam,1);
    return 0;
}
