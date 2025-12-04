#include<iostream>
using namespace std;

//traversing an 2D array
//taking inputs and display array
int main()
{
	int m,n;
	cout<<"enter rows="<<endl;
	cin>>m;
	cout<<"enter columns="<<endl;
	cin>>n;
	
	int arr[m][n];
	//taking input in array
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter "<<i<<","<<j<<" th element=";
			cin>>arr[i][j];
		}
	}
	
	//to display elements of array
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}
