#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n="<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		//for space
		for(int j=1;j<=n-i-1;j++)
		{
			cout<<" ";
		}
		//for star
		for(int j=1;j<=2*i+1;j++)
		{
			cout<<'*';
		}
		//for space
		for(int j=1;j<=n-i-1;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
