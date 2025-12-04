#include<bits/stdc++.h>
using namespace std;

//make a function for union of arrays 
//with brute force approach
void unionarray(vector <int> arr1,vector <int> arr2)
{
	int n1=arr1.size();
	int n2=arr2.size();
	
	set <int> st;
	//add elements of first array in set
	for(int i=0;i<n1;i++)
	{
		st.insert(arr1[i]);
	}
	
	//add elements of 2nd array
	for(int i=0;i<n2;i++)
	{
		st.insert(arr2[i]);
	}
	
	//now print the set or coopy it in a temp array or vector
	vector <int> unionarr;
	for(auto it:st)
	{
		unionarr.push_back(it);
	}
	
	//print unionarr
	cout<<"Union of arrays=";
	for(int i=0;i<unionarr.size();i++)
	{
		cout<<unionarr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n1,n2;
	cout<<"Enter Size of 1st Array=";
	cin>>n1;
	cout<<endl<<"Enter size of 2nd array=";
	cin>>n2;
	vector <int> arr1(n1),arr2(n2);
	
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
	
	unionarray(arr1,arr2);
	return 0;
}
