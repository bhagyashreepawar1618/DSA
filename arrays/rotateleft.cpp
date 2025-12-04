#include<iostream>
using namespace std;

void rotateleft(int arr[],int n,int k)
{
	k=k%n;
	int temp[k];
	for(int i=0;i<k;i++)
	{
		temp[i]=arr[i];
	}
	//display temp array
	cout<<"Temp array is=";
	for(int i=0;i<k;i++)
	{
		cout<<temp[i]<<" ";
	} 
	cout<<endl;
	 
	//shifting
	for(int i=k;i<n;i++)
	{
		arr[i-k]=arr[i];
	}
	
	
	//temp shifting
	int j=0;
	for(int i=n-k;i<n;i++)
	{
		arr[i]=temp[j];j++;
	}
	
	//display array
	cout<<"your rotated array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
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
	return 0;
	
}
