#include<bits/stdc++.h>
using namespace std;

//brute force for longest consecutive sequence
//function
bool ls(int arr[],int x,int size);
bool ls(int arr[],int x,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==x)
        {
            return true;
        }
        return false;
    }
}
int longest1(int arr[],int n);
int longest1(int arr[],int n)
{
    int long_ele=1;
    for(int i=0;i<n;i++)
    {
        int count=1;
        int ele=arr[i];

        while(ls(arr,ele+1,n)==true)
        {
            {
                ele=ele+1;
                count+=1;
            }
        }
        long_ele=max(long_ele,count);
    }
    return long_ele;
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

    int ans=longest1(array,n);
    cout<<" length of Longest cosecutive sequence is="<<ans<<endl;
    return 0;
}
