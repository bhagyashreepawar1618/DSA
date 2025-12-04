//find number that appear more than n/2 times in an array
//brute force approach
#include<bits/stdc++.h>
using namespace std;

int majorityelement(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		int cnt=0;
		for(int j=0;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				cnt++;
			}
			if(cnt>(size/2))
			{
				return arr[i];
				break;
			}
			
		}
	}
}
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
	int ans=majorityelement(arr,n);
	cout<<ans<<endl;
	
	return 0;
	
}
	
	
