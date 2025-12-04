#include<bits/stdc++.h>
using namespace std;

int main()
{
	//brute force of 3 for loops 
	int n;
	cout<<"Enter the size of the array= "<<endl;
	cin>>n;
	
	int a[n];
	
	//input in the arrray
	cout<<"Enter elements of array="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	//display the created array
	cout<<"Your created array is=";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	
	//we will hae 3 for loops here
	int maxi=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			for(int k=i;k<j;k++)
			{
				sum+=a[k];
			}
			maxi=max(sum,maxi);
		}
	}
	
	cout<<"maximum sum of the subarray is="<<maxi<<endl;
	return 0;
}
