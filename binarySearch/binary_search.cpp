#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int target)
{
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        if(target>arr[mid])
        {
            low=low+1;
        }
        else
        {
            high=high-1;
        }
        return -1;
    }
    
}

//binary search in a sorted array
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

    int answer=binarysearch(arr,n,tar);
    cout<<"target is found at "<< answer <<"index"<<endl;
    cout<<"THNAK YOU";

    
    return 0;
}