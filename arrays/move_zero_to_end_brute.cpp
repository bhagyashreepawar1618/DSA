#include<bits/stdc++.h>
using namespace std;

//move all zeros to the end
//brute force approach
int main()
{
	int n;
	cout<<"Enter the size of the array="<<endl;
	cin>>n;
	vector <int> array(n);
	
    //take inputs
	for(int i=0;i<n;i++)
	{
		cout<<"Enter elements=";
		cin>>array[i];
	}
	cout<<endl;
	
	//display created array
	cout<<"Your created Array is=";
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	vector <int> temp;
	for(int i=0;i<n;i++)
	{
		if(array[i]!=0)
		{
			temp.push_back(array[i]);
		}
	}
	
	//display temp
	cout<<"Temp Array is="<<endl;
	for(int i=0;i<temp.size();i++)
	{
		cout<<temp[i]<<" ";
	}
	cout<<endl;
	//put back in actual array
	for(int i=0;i<temp.size();i++)
	{
		array[i]=temp[i];
	}
	
	//add zeros to remaining places 
	for(int i=temp.size();i<n;i++)
	{
		array[i]=0;
	}
	
	//display output array
	cout<<"Your output Array is=";
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return 0;
	
	
	
	
}
