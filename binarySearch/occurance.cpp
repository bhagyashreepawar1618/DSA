#include<bits/stdc++.h>
using namespace std;

pair <int,int> occurance(int arr[],int n,int target)
{
	pair <int,int> p={-1,-1};
	for(int i=0;i<n;i++)
	{
		if(arr[i]==target)
		{
			p.first=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]==target)
		{
			p.second=i;
			break;
		}
	}
	return p;
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
    
    pair <int,int> answer=occurance(arr,n,tar);
    cout<<"first occurance="<<answer.first<<endl;
    cout<<"last occurance="<<answer.second<<endl;
    
	
	
	return 0;
}
