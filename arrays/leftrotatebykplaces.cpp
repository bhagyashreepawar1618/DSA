#include<iostream>
using namespace std;

void rotateleft(int arr[],int n,int k)
{
	if(k==0)
	{
		return;
	}
	//if(k>n)
	{
		//k=k%n;
	}
	int temp=arr[0];
	for(int i=1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
	cout<<"Execution"<<endl;
	rotateleft(arr,n,k-1);
	
}

int main()
{
	int size;
	cout<<"Enter size="<<endl;
	cin>>size;
	int myarr[size];
	
	//taking input in array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter element=";
		cin>>myarr[i];
	}
	
	//display created array
	cout<<"your array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	//take input 
	int d;
	cout<<"Enter How many Times you Have to left rotate the array=";
	cin>>d;
	
	
	//function call
	rotateleft(myarr,size,d);
	
	//display rotated array
	cout<<"your Rotated array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
}
