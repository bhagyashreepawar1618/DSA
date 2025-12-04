#include<iostream>
using namespace std;
void printhello(int n)
{
	if(n==0)
	{
		//return;
	}
	cout<<"Hello"<<endl;
	printhello(n-1);
}
int main()
{
	int x;
	cout<<"Enter how many times u have to print="<<endl;
	cin>>x;
	printhello(x);
	return 0;
}
