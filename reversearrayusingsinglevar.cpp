#include<iostream>
using namespace std;
void reverse(int arr[],int n,int i){
	if(i>=n/2){
		return;
	}
	int temp=arr[i];
	arr[i]=arr[n-i-1];
	arr[n-i-1]=temp;
	reverse(arr,n,i+1);
}
int main(){
	int n;
	cout<<"ENTER THE SIZE OF ARRAY YOU WANT TO CREATE  ";
	cin>>n;
	int arr[n];
	cout<<"NOW ENTER THE ARRAY ELEMENT ONE BY ONE AFTER ENTER ONE ELEMENT PLS TAP THE ENTER BUTTON \n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"ARRAY BEFORE REVERSE  "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	reverse(arr,n,0);
	cout<<"\nARRAY AFTER REVERSE  "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
