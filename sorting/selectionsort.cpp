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
	
	//sorting (selection)
	for(int i=0;i<size-1;i++)
	{
		int mini;
		for(int j=i;j<size;j++)
		{
			if(myarr[j]<myarr[j+1])
			{
				mini=j;
			}
		}
		swap(myarr[i],myarr[mini]);
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
	
	
	
