#include<iostream>
using namespace std;

void printnum(int i,int n)
{
	if(i==n+1)
	{
		return;
	}
	cout<<i<<endl;
	i++;
	printnum(i,n);
}

int main()
{
	int N;
	cout<<"Enter a number="<<endl;
	cin>>N;
	printnum(1,N);
	return 0;
}
