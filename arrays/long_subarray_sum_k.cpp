#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size="<<endl;
	cin>>n;
	vector <int> array(n);
	
	cout<<"Enter Elements Of array" <<"="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
	//Display array
	cout<<"Elements Of array=";
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	int k;
	cout<<"Enter value of k="<<endl;
	cin>>k;
	int len=0;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=array[j];
			if(sum==k)
			{
				len=max(len,j-i+1);
			}
		}
	}
	cout<<"max length="<<len<<endl;
	return 0;
}
