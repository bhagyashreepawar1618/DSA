#include<bits/stdc++.h>
using namespace std;

int main()
{
	//have to find the maximum sum in a subarray
	//the arrray can have both positive and negative eleemnts
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
	
	//in this brute force approach we will calculate the sum of each subarray then simply find which is largest sum
	int maximumsum=0;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=a[j];
			maximumsum=max(maximumsum,sum);
		}
	}
	
	cout<<"maximum sum of the subarray is="<<maximumsum<<endl;
	return 0;
}
