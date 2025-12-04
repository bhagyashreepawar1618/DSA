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
	
	//sorting 
	int cnt0=0,cnt1=0,cnt2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			cnt0++;
		}
		else if(arr[i]==1)
		{
			cnt1++;
		}
		else
		{
			cnt2++;
		}
	}
	cout<<cnt0<<cnt1<<cnt2<<endl;
	
	//display sorted array using 3 for loops

	for(int i=0;i<cnt0;i++)
	{
		arr[i]=0;
	}
	for(int i=cnt0;i<cnt1+cnt0;i++)
	{
		arr[i]=1;
	}
	for(int i=cnt1+cnt2;i<n;i++)
	{
		arr[i]=2;
	}
	cout<<endl;
	
	//display sorted array
	cout<<"Your sorted array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
