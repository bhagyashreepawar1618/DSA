#include<iostream>
using namespace std;

void reverse(int m,int arr[],int n)
{
	//base condition;
	if(m>n)
	{
		return;
	}
	swap(arr[m],arr[n]);
	reverse(m+1,arr,n-1);
}

int main()
{
	int x;
	cout<<"enter size="<<endl;
	cin>>x;
	int marks[x];
	//taking input
	for(int i=0;i<x;i++)
	{
		cout<<"enter element="<<endl;
		cin>>marks[i];
	}
	
	//function call
	reverse(0,marks,x-1);
	//output of array
	cout<<"Reversed array is=";
	for(int j=0;j<x;j++)
	{
		cout<<marks[j]<<" ";
	}
	return 0;
	
}
