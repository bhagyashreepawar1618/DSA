#include<bits/stdc++.h>
using namespace std;

//find missing element using XOR
int f(int arr[],int n)
{
	int XOR1=0,XOR2=0,XOR;
	for(int i=0;i<n;i++)
	{
		XOR1=XOR1^arr[i];
		XOR2=XOR2^i+1;
	}
	XOR=XOR1^XOR2^n+1;
	return XOR;
}

int main()
{
	int n1;
	cout<<"Enter size="<<endl;
	cin>>n1;
	int array[n1];
	
	cout<<"Enter Elements Of array "<<"from 1 to "<<n1+1 <<"="<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>array[i];
	}
	
	//Display array
	cout<<"Elements Of array=";
	for(int i=0;i<n1;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	//function call
	cout<<"Missing number is="<<f(array,n1);
	return 0;
}
