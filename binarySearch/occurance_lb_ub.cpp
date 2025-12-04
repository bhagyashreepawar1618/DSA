#include<bits/stdc++.h>
using namespace std;
//using upper bound and lower bound
//first and last occurance using upper and lower bound
int lb(int arr[],int n,int k)
{
	int low=0,high=n-1;
	int ans=n;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]>=k)
		{
			ans=mid;
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return ans;
}

int ub(int arr[],int n,int k)
{
	
	int low=0,high=n-1;
	int ans=n;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]>k)
		{
			ans=mid;
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return ans;
}

pair <int,int> occbinary(int arr[],int n,int k)
{
	int lower=lb(arr,n,k);
	if(lower==n || arr[lower]!=k)
	{
		return {-1,-1};
	}
	int upper=ub(arr,n,k);
	return {lower ,upper-1};
}


int main()
{
	int n;
    cout<<"Enter the size of array="<<endl;
    cin>>n;

    //declare array
    int arr[n];

    //input in an array
    cout<<"Enter elements of an array="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //display cretaed array
    cout<<"Your created array is=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int tar;
    cout<<"Enter your target="<<endl;
    cin>>tar;
    pair <int,int> answer=occbinary(arr,n,tar);
    cout<<"first occurance="<<answer.first<<endl;
    cout<<"last occurance="<<answer.second<<endl;
    return 0;
	
}
