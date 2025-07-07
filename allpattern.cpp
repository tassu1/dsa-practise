#include<iostream>
using namespace std;
void patt1(int n){

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<" * ";
		}
		cout<<endl;
	}
}
void patt2(int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<" * ";
		}
		cout<<endl;
	}
}
void patt3(int n){

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<" "<<j<<" ";
		}
		cout<<endl;
	}
}
void patt4(int n){
  
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<" "<<i<<" ";
		}
		cout<<endl;
	}
}
void patt5(int n){

	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			cout<<" * ";
		}
		cout<<endl;
	}
}
void patt6(int n){
   
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			cout<<" "<<j<<" ";
		}
		cout<<endl;
	}
}
void patt7(int n){
	for (int i=0;i<n;i++){
		//space
		for(int j=0;j<=n-i-1;j++){
			cout<<" ";
		}
		//star
		for(int j=1;j<=2*i+1;j++){
			cout<<"*";
		}
		//space
		for(int j=0;j<=n-i-1;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
void patt8(int n){
	for(int i=0;i<n;i++){
		//space
			for(int j=0;j<i;j++){
			cout<<" ";
		}
		//start
		for(int j=0;j<2*n-(2*i+1);j++)
		{
			cout<<"*";
		}
		//space
			for(int j=0;j<i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
void patt9(int n){
	for (int i=0;i<n;i++){
		//space
		for(int j=0;j<=n-i-1;j++){
			cout<<" ";
		}
		//star
		for(int j=1;j<=2*i+1;j++){
			cout<<"*";
		}
		//space
		for(int j=0;j<=n-i-1;j++){
			cout<<" ";
		}
		cout<<endl;
	}
		for(int i=0;i<n;i++){
		//space
			for(int j=0;j<i;j++){
			cout<<" ";
		}
		//start
		for(int j=0;j<=2*n-(2*i+1);j++)
		{
			cout<<"*";
		}
		//space
			for(int j=0;j<i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
 
}
void patt10(int n){
	for(int i=1;i<=2*n-1;i++){
		int star=i;
		if(i>n){
			star=2*n-i;
		}
		for(int j=1;j<=star;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void patt11(int n){
	for(int i=0;i<n;i++){
		int start=1;
		if(i%2==0){
			start=1;
		}else{
			start=0;
		}
		for(int j=0;j<=i;j++){
			cout<<start;
			start=1-start;
		}
		cout<<endl;
	}
}
void patt12(int n){
	int space=2*(n-1);
	for(int i=1;i<=n;i++){
		//number
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		//space
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		//reverse number
			for(int j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
		space-=2;
	}
}
void patt13(int n){
	int num=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<num<<" ";
			num+=1;
		}
		cout<<endl;
	}
}
void patt14(int n){
	for(int i=0;i<=n;i++){
		for(char ch='A';ch<='A'+i-1;ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}
void patt15(int n){
	for(int i=1;i<=n;i++){
		for(char ch='A';ch<='A'+(n-i);ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}
void patt16(int n){
	for(int i=0;i<n;i++){
		char ch='A'+i;
		for(int j=0;j<=i;j++){
			cout<<ch<<' ';
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cout<<"Enter the size of all pattern";
	cin>>n;
	patt1(n);
	cout<<endl;
	patt2(n);
	cout<<endl;
	patt3(n);
	cout<<endl;
	patt4(n);
	cout<<endl;
	patt5(n);
	cout<<endl;
	patt6(n);
	cout<<endl;
	patt7(n);
	cout<<endl;
	patt8(n);
	cout<<endl;
	patt9(n);
	cout<<endl;
	patt10(n);
	cout<<endl;
	patt11(n);
	cout<<endl;
	patt12(n);
	cout<<endl;
	patt13(n);
	cout<<endl;
	patt14(n);
	cout<<endl;
	patt15(n);
	cout<<endl;
	patt16(n);
	return 0;
}
