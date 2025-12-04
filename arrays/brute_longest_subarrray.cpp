#include<bits/stdc++.h>
using namespace std;
int main()
{
	//generate all the subarrays 
	//using 2 for loops
	//or may be 3 forloops 
	//take sum of all and then check it with k
	//then store longest length
	int n;
	cout<<"Enter size of the array="<<endl;
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter elements of array="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Created array=";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int k;
	cout<<"Enter the sum you have to find="<<endl;
	cin>>k;
	
	//generate subarrays
	int length=0;
	
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum=sum+arr[j];
			if(sum==k)
			{
				length=max(length,(j-i+1));
			}
		}
	}
	cout<<"length of longest subarray="<<length<<endl;
	return 0;
}
