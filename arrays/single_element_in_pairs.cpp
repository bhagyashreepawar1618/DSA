#include<bits/stdc++.h>
using namespace std;
//find single element present in array
//
int main()
{
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//display array
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//declare or create a hasharray
	int maxi=0;
	for(int i=0;i<n;i++)
	{
		maxi=max(maxi,arr[i]);
	}
	int hash[maxi+1]={0};
	//iterarte in array and do hashing
	for(int i=0;i<n;i++)
	{
		hash[arr[i]]++;
	}
	
	//check if any element is only 1
	for(int i=0;i<n;i++)
	{
		if(hash[i]==1)
		{
			cout<<i<<" is only one"<<endl;
		}
	}
	return 0;
	
}
