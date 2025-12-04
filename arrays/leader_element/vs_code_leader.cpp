#include<bits/stdc++.h>
using namespace std;

vector <int> leader(int arr[],int size)
{
    vector <int> ans;
    for(int i=0;i<size;i++)
    {
        bool leaderr=true;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                leaderr=false;
            }
        }
        if(leaderr==true)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{
    int n;

    cout<<"enter the size="<<endl;
    cin>>n;

    int array[n];

    cout<<"Enter the elements of array="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    //display cretaed array
    cout<<"Your created array is="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl; 

    vector <int> answer=leader(array,n);

    //print the answer array
    cout<<"leaders are=";
    for(auto it:answer)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;

}