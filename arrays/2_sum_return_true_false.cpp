#include<bits/stdc++.h>
using namespace std;

bool twosum(int arr[],int target,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int sum=0;
			sum=arr[i]+arr[j];
			if(sum==target)
			{
				return true;
				break;
			}
		}
	}
	return false;
}
int main()
{
	int n;
	cout<<"Enter size="<<endl;
	cin>>n;
	
	//create array
	int arr[n];
	cout<<"Enter elements=";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	
	//display array
	cout<<"array =";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter target="<<endl;
	int k;
	cin>>k;
	
	//function call
	cout<<"answer="<<twosum(arr,k,n)<<endl;
	
	return 0;
	
}
