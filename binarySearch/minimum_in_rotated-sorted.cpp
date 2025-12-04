#include<bits/stdc++.h>
using namespace std;

//function to find minimum
//do simple binary search
//find the sorted half take min from there 
//and eliminate the sorted part after taking the min and continue the process

int minelement(int arr[],int n)
{
    int low=0,high=n-1;

    int minNum=INT_MAX;
    while(low<=high)
    {
        int mid=(low+high)/2;

        //if right half is sroted take min from it and eliminate it
        if(arr[low]<=arr[mid])
        {
            minNum=min(minNum,arr[mid]);
            low=mid+1;
        }

        //if left half is sorted take min and eliminate
        else if(arr[mid]<=arr[high])
        {
            minNum=min(minNum,arr[mid]);
            high=mid-1;
        }
    }
    return minNum;
}

int main()
{
    int n;
    cout<<"Enter the sie of array="<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter elements="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Created array is=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int ans=minelement(arr,n);
    cout<<"MINIMUM ELEMENT IS="<<ans<<endl;
    return 0;
    
}