#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"size=";
	cin>>n;
	
	int arr[n];
	
	cout<<"Elements=";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	
	int k;
	cout<<"Enter sum u have to find=";
	cin>>k;
	
	int length=0;
	int i=0;int j=0;
	int sum=0;
	while(i<n && j<n)
	{
		sum+=arr[j];
		while(sum>k && i<=j)
		{
			sum=sum-arr[i];
			i++;
		}
		if(sum==k)
		{
			length=max(length,(j-i+1));
		}
		j++;

	}
	
	cout<<"longest subarray="<<length<<endl;
	return 0;
}
