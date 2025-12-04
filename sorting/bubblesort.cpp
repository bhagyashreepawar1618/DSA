#include<iostream>
using namespace std;
//program to sequential sort

int main()
{
	int size;
	cout<<"Enter size of the array="<<endl;
	cin>>size;
	int myarr[size];

	//taking inputs in array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i<<" th Element of array=";
		cin>>myarr[i];
	}
	cout<<endl;

	//display the created array
	cout<<"Your created array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	//sorting (bubblesort)
	for(int i=1;i<size;i++)
	{
		for(int j=0;j<=size-i-1;j++)
		{
			if(myarr[j]>myarr[j+1])
			{
				swap(myarr[j],myarr[j+1]);
			}
		}
	}
	
	//display sorted array
	cout<<"Your sorted array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
	
	
	
