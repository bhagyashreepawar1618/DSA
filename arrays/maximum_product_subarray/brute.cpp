#include<bits/stdc++.h>
using namespace std;
//we will cretae 3 for loops 
int main()
{
    int n;
    cout<<"Enter the size of the array=";
    cin>>n;
    
    int arr[n];

    cout<<endl<<"Enter the elements of array="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Your created array is=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int maxi=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int product=1;
            for(int k=i;k<=j;k++)
            {
                product=product*arr[k];
                maxi=max(product,maxi);
            }
        }
    }

    cout<<"the maximum product of the subarray is="<<maxi<<endl;
    return 0;
}