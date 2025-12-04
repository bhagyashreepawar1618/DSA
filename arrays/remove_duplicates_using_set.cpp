#include<bits/stdc++.h>
using namespace std;
//remove duplicates from a sorted array
//output will be again a sorted array

int main()
{
	int n;
	cout<<"Enter size of array=";
	cin>>n;
	int arrayy[n];
	cout<<endl;
	
	//taking inputs in array
	cout<<"Enter Elements Of Array="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arrayy[i];
	}
	
	//display created array
	cout<<"Your Array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arrayy[i]<<" ";
	}
	cout<<endl;
	
	//will insert all elements of array one by one in a set
	set <int> st;
	for(int i=0;i<n;i++)
	{
		st.insert(arrayy[i]);
	}
	
	//traverse in set
	int index=0;
	for(int it: st)
	{
		arrayy[index]=it;
		index++;
	}
	
	//again display array
	cout<<"Your Array is=";
	for(int i=0;i<n;i++)
	{
		cout<<arrayy[i]<<" ";
	}
	cout<<endl;
	return 0;
	
	
}
