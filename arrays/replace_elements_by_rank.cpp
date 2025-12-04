#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n1;
	cout<<"Enter size="<<endl;
	cin>>n1;
	int array[n1];
	
	cout<<"Enter Elements Of array" <<"="<<endl;
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
	
	//sort the array
	//bubble sort
	for(int i=n1-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(array[j]>array[j+1])
			{
				swap(array[j],array[j+1]);
			}
		}
	}
	//sorted array
		//Display array
	cout<<"Elements Of array=";
	for(int i=0;i<n1;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
