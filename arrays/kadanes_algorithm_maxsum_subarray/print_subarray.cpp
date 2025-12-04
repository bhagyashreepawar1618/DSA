//print the subarray with maximum sum
///not only the sum of subarrray
#include<bits/stdc++.h>
using namespace std;

int main()
{
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
	
	int start,startnum,endnum;
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(sum==0)
		{
			start=i;		
		}
		sum+=a[i];
		if(sum>maxi)
		{
			maxi=sum;
			startnum=start;
			endnum=i;
		}
		
		if(sum<0)
		{
			sum=0;
		}
	}
	cout<<"MAXIMUM SUM="<<maxi<<endl;
	cout<<"MAXIMUM SUBARRAY is=";
	for(int i=startnum;i<=endnum;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"THANK YOU SO MUCH!!!";
	
	return 0;
}
