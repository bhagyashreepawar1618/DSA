#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number=";
	cin>>n;
	//for first half
	for(int i=0;i<n;i++)
	{
		//stars
		for(int j=1;j<=n-i;j++)
		{
			cout<<'*';
		}
		//for space
		for(int j=1;j<=2*i;j++)
		{
			cout<<" ";
		}
		//for stars 
			for(int j=1;j<=n-i;j++)
		{
			cout<<'*';
		}
		cout<<endl;
		
	}
	int start=2*n-2;
	for (int i=0;i<n;i++)
	{
		//for star
		for(int j=1;j<=i+1;j++)
		{
			cout<<'*';
		}
		for(int j=1;j<=start;j++)
		{
			cout<<" ";
		}
		start=start-2;
		for(int j=1;j<=i+1;j++)
		{
			cout<<'*';
		}
		cout<<endl;
		
	}
	return 0;
}
