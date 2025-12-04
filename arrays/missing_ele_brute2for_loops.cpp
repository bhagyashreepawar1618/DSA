#include<bits/stdc++.h>
using namespace std;
//a range is given from 0 to n or from 1 to n;
int missingnum(int arr[],int n)
{
	for(int i=1;i<=n;i++)
	{
		int flag=0;
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]==i)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			return i;
		}
	}
}
int main()
{
	int n1;
	cout<<"Enter size="<<endl;
	cin>>n1;
	int array[n1];
	
	cout<<"Enter Elements Of array "<<"from 1 to "<<n1+1 <<"="<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>array[i];
	}
	
	//Display array
	cout<<"Elements Of array=";
	for(int i=0;i<n1;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	//function call
	cout<<"Missing number is="<<missingnum(array,n1+1);
	return 0;
}
