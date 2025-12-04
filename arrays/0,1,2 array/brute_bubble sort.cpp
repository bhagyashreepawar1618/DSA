#include<bits/stdc++.h>
using namespace std;
//sorting array of 0,1 and 2 using bubble sort
int main()
{
	int n;
	cout<<"Enter the size="<<endl;
	cin>>n;
	
	int arr[n];
	
	//input in array
	cout<<"Enter elements of array="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	//display the created array
	cout<<"Your created array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//sort array using bubble sort 
	for(int i=n;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
			
		}
	}
	
	//display sorted array
	cout<<"Your sorted array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
