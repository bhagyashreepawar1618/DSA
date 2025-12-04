#include<iostream>
using namespace std;

int main()
{
	//program for square star pattern
	//outer forlooop
	int n;
	cout<<"ENTER A NUMBER=";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<'*'<<" ";
		}
		cout<<endl;
	}
	return 0;
}
