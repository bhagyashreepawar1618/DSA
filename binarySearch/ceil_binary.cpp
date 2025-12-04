#include<bits/stdc++.h>
using namespace std;

//if array=[10,11,12,13,14,16,20];
//ceil= tar>=arr[i]
//for 12 ceil=12 floor=12
//for 15 ceil=16 floor=14


int ceil(int arr[],int n,int tar)
{
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=tar)
        {
            ans=arr[mid];
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;

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

    int target;
    cout<<"Enter target="<<endl;
    cin>>target;

    int answer=ceil(arr,n,target);
    cout<<"ceil ="<<answer;
    return 0;


}