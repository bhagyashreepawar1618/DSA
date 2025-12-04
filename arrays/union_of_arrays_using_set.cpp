#include<bits/stdc++.h>
using namespace std;
//union of a set
//brute force approach using set
//union should contain each element of both arrays nut duplicates are not alllowed
int main()
{
	int n1,n2;
	cout<<"Enter Size of 1st Array=";
	cin>>n1;
	cout<<endl<<"Enter size of 2nd array=";
	cin>>n2;
	int arr1[n1];
	int arr2[n2];
	
	//input in 1st array
	cout<<endl<<"Enter Elements Of 1st array="<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	
	//input in arr2
	cout<<"Enter Elements Of 2nd array="<<endl;
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	cout<<endl;
	
	//display 1st array then 2nd
	cout<<endl<<"1st array=";
	for(int i=0;i<n1;i++)
	{
		cout<<arr1[i]<<" ";
	}

	cout<<endl<<"2nd array=";
	for(int i=0;i<n2;i++)
	{
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
	
	///set making
	set <int> st;
	for(int i=0;i<n1;i++)
	{
		st.insert(arr1[i]);
	}
	
	for(int i=0;i<n2;i++)
	{
		st.insert(arr2[i]);
	}
	
	//print set by iterating in the set 
	cout<<"Your created set is=";
	for(int it:st)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	
	//now copy set in union array or vector
	vector <int> unionset;
	for(int it:st)
	{
		unionset.push_back(it); 
	}
	
	//print union
	cout<<"Union is=";
	for(int i=0;i<unionset.size();i++)
	{
		cout<<unionset[i]<<" ";
	}
	cout<<endl;
	return 0;
	
	
}
