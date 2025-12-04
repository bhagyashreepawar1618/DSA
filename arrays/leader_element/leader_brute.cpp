#include<bits/stdc++.h>
using namespace std;

//if element is greater than all the right side elements then it means it is the leader

vector <int> leaderele(int a[],int n)
{
	vector <int> ans;
	for(int i=0;i<n;i++)
	{
		bool leader=true;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				leader=false;
				break;
			}
			
		}
		if(leader==true)
		{
			ans.push_back(a[i]);
		}
	}
	return ans;
}
int main()
{
	//brute force for finding leader element
	//2 for loops banayenge
	//1 to iterate through the array
	//2nd to check if right side element is greter or not
	int n;
	cout<<"Enter the size of the array= "<<endl;
	cin>>n;
	
	int a[n];
	
	//input in the arrray
	cout<<"Enter elements of array="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	//display the created array
	cout<<"Your created array is=";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	vector <int> arr=leaderele(a,n);
	
	for(auto it:arr)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;
	
	
}
