#include<iostream>
using namespace std;
void palinstring(string str,int n){
		//string dup=str;
		string s;
		for(int i=n-1;i>=0;i--){
			s+=str[i];
		}
		cout<<s<<endl;
		if(str==s){
			cout<<"STRING IS PALINDROME ";
		}else{
			cout<<"STRING IS NOT PALINDROME ";
		}
	
}
int main(){
	string str;
	cout<<" ETNER THE STRING YOU WANT TO CHECK WHETHER IS PALINDROME OR NOT  ";
	getline(cin, str);
    int n = str.length();
	palinstring(str,n);
	return 0;
}
