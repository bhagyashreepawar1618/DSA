#include<bits/stdc++.h>
using namespace std;

int main()
{
	//optimal appproach
	//in this approach we will use kadnae's algo
	//count the sum if the sum is negative reset it to zero
	//before resetting just update the maximumsum
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
	
	//code
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum>maxi)
		{
			maxi=sum;
		}
		if(sum<0)
		{
			sum=0;
		}
		
	}
	
	cout<<"maximum sum is="<<maxi<<endl;
	return 0;
}
