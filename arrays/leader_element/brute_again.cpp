#include<bits/stdc++.h>
using namespace std;

//brute force for finding leaders in array
//it will only return ans array
vector <int> leader1(int arr[],int n)
{
	vector <int> ans;
	for(int i=0;i<n;i++)
	{
		bool leader=true;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				leader=false;
				break;
			}
		}
		if(leader==true)
		{
			ans.push_back(arr[i]);
		}
	}
	return ans;
}


int main()
{
	int n;
	cout<<"Enter size="<<endl;
	cin>>n;
	
	int array[n];
	
	cout<<"Enter the elements of array="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
    //display cretaed array

	cout<<"your created array is=";
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	vector <int> answer;
	answer=leader1(array,n);
	
	cout<<"leaders are="<<endl;
	for(auto it:answer)
	{
		cout<<it<<" ";
	}
	
	return 0;
	
}
 
