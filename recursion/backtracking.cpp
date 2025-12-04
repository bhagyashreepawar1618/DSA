#include<iostream>
using namespace std;
//prints in reverse order

void printnum(int n,int i)
{
	if(n>i)
	{
		return;
	}
	printnum(n+1,i);
	cout<<n<<endl;
}

int main()
{
	int N,x;
	cout<<"from number="<<endl;
	cin>>N;
	cout<<"to number="<<endl;
	cin>>x;
	printnum(N,x);
	return 0;
}
