#include<iostream>
using namespace std;
//check if array is sorted or not in asending order
bool check(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			return false;
		}
	}
	//pura execution ke bad hi loop ke bahar ayenge
	//loop ke bahar aa gye mtlb every previous element is less thn or equal to next element
	//this menas array is sorted in ascending order hence returns true 
	return true;
	
}

int main()
{
	int n;
	cout<<"Enter size of array=";
	cin>>n;
	int arrayy[n];
	cout<<endl;
	
	//taking inputs in array
	cout<<"Enter Elements Of Array="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arrayy[i];
	}
	
	//display created array
	cout<<"Your Array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arrayy[i]<<" ";
	}
	cout<<endl;
	
	cout<<check(arrayy,n);
	return 0;
}
