#include<bits/stdc++.h>
using namespace std;

//to find the target in rotated sorted array
//it will return the index at ehich the target is found
//pehle sorted part me hai ya nhi check kro
//if no then repeat the process unsorted part ka mid dhundo

int searchinrotatedarray(int arr[],int n,int target)
{
    int low=0,high=n-1;
    int mid=(low+high)/2;

    while(low<=high)
    {
    if(arr[mid]==target)
    {
        return mid;
    }

    //first part is sorted
    else if(arr[low]<=arr[mid])
    {
        if(arr[low]<=target && target<=arr[high])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }


    //secomd part is sorted 
    else if(arr[mid]<=arr[high])
    {
        if(arr[mid]<=target && target<=arr[high])
        {
            low=mid+1;
        } 
        else
        {
            high=mid-1;
        }
    }
}

    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array="<<endl;
    cin>>n;

    //declaring array
    int arr[n];

    //input in array
    cout<<"Enter elements in array="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //display created array
    cout<<"Your created array is=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    cout<<"Enter the Target="<<endl;
    int target;
    cin>>target;
    
    int ans=searchinrotatedarray(arr,n,target);

    cout<<"Target is Found at="<<ans;
    return 0;
}