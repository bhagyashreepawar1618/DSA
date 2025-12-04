//sorting using count variable
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter size="<<endl;
	cin>>n;
	
	int arr[n];
	
	//input in array
	cout<<"Enter elements of array="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	//dispay created array
	cout<<"Your created array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//dutch flag algorithm (3 pointer algorithm)
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			swap(arr[mid],arr[low]);
			low++;
			mid++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else
		{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
	
	//display  sorted array

	cout<<"Your created array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
	
