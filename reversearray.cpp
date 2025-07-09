#include<iostream>
using namespace std;
void reverse(int arr[],int l,int r){
	if(l>=r){
		return;
	}
	int temp=arr[l];
	arr[l]=arr[r];
	arr[r]=temp;
	reverse(arr,l+1,r-1);
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
	reverse(arr,0,n-1);
	cout<<"\nARRAY AFTER REVERSE  "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
