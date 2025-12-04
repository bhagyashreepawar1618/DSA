#include<iostream>
using namespace std;

void printnum(int i,int n)
{
	if(i==n+1)
	{
		return;
	}
	cout<<"BHAGYASHREE"<<endl;
	i++;
	printnum(i,n);
}

int main()
{
	int N;
	cout<<"How many times you have to print ur name="<<endl;
	cin>>N;
	printnum(1,N);
	return 0;
}
