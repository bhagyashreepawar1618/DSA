#include<bits/stdc++.h>
using namespace std;

int missingnum(int arr[],int n)
{
	for(int i=1;i<=n;i++)
	{
		if(arr[i-1]!=i)
		{
			return i;
			break;
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
