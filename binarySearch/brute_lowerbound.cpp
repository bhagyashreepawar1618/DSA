#include<bits/stdc++.h>
using namespace std;


//brute force approach to find lowerbound in a sorted array
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

    //linear search in an array
    int target;
    cout<<"Enter your target="<<endl;
    cin>>target;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=target)
        {
            cout<<"target found at "<<i<<"th index"<<endl;
            break; 
        }
    }
    return 0;
}