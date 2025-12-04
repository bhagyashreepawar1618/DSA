#include<iostream>
using namespace std;
//directly shift by k places
void rotate(int arr[],int k,int n)
{
	if(k>n)
	{
		k=k%n;
	}
	int temp[k];
	//copy last k elements to a temp array having size k
	for(int i=n-k;i<n;i++)
	{
		temp[i-(n-k)]=arr[i];
	}
	cout<<"temp=";
	for(int i=0;i<k;i++)
	{
		cout<<temp[i]<<" ";
	}
	cout<<endl;
	
	//copy remaining elements to dupilcate array having size n-k
	int dup[n-k];
	for(int i=0;i<n-k;i++)
	{
		dup[i]=arr[i];
	}
	
	//shift elements
	for(int i=0;i<n-k;i++)
	{
		arr[i+k]=dup[i];
	}
	
	//add temp to array again 
	for(int i=0;i<k;i++)
	{
		arr[i]=temp[i];
	}
	
	//display rotated array
	cout<<"Output array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n1;
	cout<<"Size=";
	cin>>n1;cout<<endl;
	
	//array declare and inputs
	int array[n1];
	cout<<"Enter Elements of array="<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>array[i];
	}
	
	//display created array
	cout<<"Your cretaed array is=";
	for(int i=0;i<n1;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter How many Times you have to right rotate the array??=";
	int m;
	cin>>m;cout<<endl;
	
	//function call;
	rotate(array,m,n1);
	return 0;
	
}
