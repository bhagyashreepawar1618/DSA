#include<bits/stdc++.h>
using namespace std;

vector <int> answer(vector<int> a,vector <int> b)
{
	int n1=a.size();
	int n2=b.size();
	int visit[]={0};
	vector <int> ans;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(a[i]==b[j] && b[j]==0 )
			{
				ans.push_back(b[j]);
				visit[j]=1;
				break;
			}
		}
	}
	return ans;
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
	vector <int> result=answer(arr1,arr2);
	
	cout<<"Your Resultant array is=";
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<" ";
	}
	return 0;
}
