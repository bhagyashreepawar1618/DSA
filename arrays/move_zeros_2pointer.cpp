#include<bits/stdc++.h>
using namespace std;

//move zeros to the end 

int main()
{
	
	int size;
	cout<<"Enter size of the array="<<endl;
	cin>>size;
	int array[size];

	//taking inputs in array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i<<" th Element of array=";
		cin>>array[i];
	}
	cout<<endl;

	//display the created array
	cout<<"Your created array is=";
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	//find first zero
	int j;
	for(int i=0;i<size;i++)
	{
		if(array[i]==0)
		{
			j=i;
			cout<<" first zero="<<j<<endl;
			break;
		}
	}
	int start=j+1;
	for(int i=start;i<size;i++)
	{
		if(array[j]!=array[i])
		{
			swap(array[i],array[j]);
			j++;
		}
	}
	
	//display output
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
