#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size="<<endl;
	cin>>n;
	
	//create array
	int arr[n];
	cout<<"Enter elements=";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	
	//display array
	cout<<"array =";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int XOR=0;
	for(int i=0;i<n;i++)
	{
		XOR=XOR^arr[i];
	}
	cout<<"Single element present is="<<XOR<<endl;
	return 0;
	
}
