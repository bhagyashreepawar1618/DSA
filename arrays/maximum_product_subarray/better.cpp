#include<bits/stdc++.h>
using namespace std;

//complexity is n square(only two for loops)

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

    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int product=1;
        for(int j=i;j<n;j++)
        {
            product=product*arr[j];
            maxi=max(maxi,product);
        }
    }

    cout<<"Maximum product of subarray is="<<maxi;
    return 0;
}
