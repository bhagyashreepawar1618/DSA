#include<bits/stdc++.h>
using namespace std;

int Upperbound(int arr[],int n,int tar)
{
    int low=0,high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>tar)
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

    int answer=Upperbound(arr,n,target);
    cout<<"upperbound found at index="<<answer;
    return 0;


}