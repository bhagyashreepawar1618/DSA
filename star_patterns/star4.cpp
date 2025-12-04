#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number="<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(char ch='A'; ch<='A'+(n-1-i);ch++)
		{
			cout<<ch<<" ";
		}
		cout<<endl;
	}
	return 0;
}
