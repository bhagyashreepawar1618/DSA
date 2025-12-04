#include<iostream>
using namespace std;

void printnum(int n,int i)
{
	if(i>n)
	{
		return;
	}
	cout<<n<<endl;
	n--;;
	printnum(n,i);
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
