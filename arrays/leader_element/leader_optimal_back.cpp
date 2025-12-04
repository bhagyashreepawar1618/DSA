#include<bits/stdc++.h>
using namespace std;

//leader function
vector <int> leader(int arr[],int n)
{
    vector <int> ans;
    // int maxi=0;
    int leaderr=0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>leaderr)
        {
            leaderr=arr[i];
            // maxi=leaderr;
            ans.push_back(leaderr);
        }
    }
    return ans;
}

int main()
{
    int n;

    cout<<"Enter size of the array="<<endl;
    cin>>n;

    int array[n];

    //input in the array
    cout<<"Enter the elements="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    //display your created array
    cout<<"Your created array is=";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    vector <int> answer=leader(array,n);
    cout<<"Leaders are=";
    for(auto it:answer)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;



}
