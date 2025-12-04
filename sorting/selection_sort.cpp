#include<bits/stdc++.h>
using namespace std;
//selection sort
int main()
{
	int s;
	cout<<"Enter The size Of the array=";
	cin>>s;
	vector <int> arr(s);
	
	//taking input in array
	cout<<"Enter Elements="<<endl;
	for(int i=0;i<s;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	
	//display created array
	cout<<"Your Created Array Is=";
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//sequential sort
	int min=0;
	for(int j=0;j<s;j++)
	{
		if(arr[j]<arr[min])
		{
			swap(arr[j],arr[min]);
			min=j;
		}
	}
	
	//display sorted array 
	cout<<"Your Soretd Array is=";
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
