#include<bits/stdc++.h>
using namespace std;
//this program is to find how many times an element has occured in the sorted aray


//function first to find first occurance
int first(int arr[],int n,int k)
{
	int low=0;
	int high=n-1;
	int f=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==k)
		{
			f=mid;
			high=mid-1;
		}
		else if(arr[mid]>k)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return f;
	
}

int last(int arr[],int n,int k)
{
	int low=0,high=n-1;
	int l=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==k)
		{
			l=mid;
			low=mid+1;
		}
		else if(arr[mid]<k)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return l;
	
}

pair <int,int> binaryfirstlast(int arr[],int n,int k)
{
	int f=first(arr,n,k);
	if(f==-1)
	{
		return {-1,-1};
	}
	int l=last(arr,n,k);
	return {f,l};
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
    
    pair <int,int> answer=binaryfirstlast(arr,n,tar);
    cout<<"first occurance="<<answer.first<<endl;
    cout<<"last occurance="<<answer.second<<endl;
    cout<<"total number of occurance="<<((answer.second)-(answer.first))+1<<endl;
    return 0;
    
}
