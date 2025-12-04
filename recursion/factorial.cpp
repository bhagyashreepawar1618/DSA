#include<iostream>
using namespace std;
//prints factorial of a number N

int fact(int n)
{
	if(n==0)
	{
		return 1;
    }
	return n*fact(n-1);
}

int main()
{
	int N,factorial;
	cout<<"Enter a number="<<endl;
	cin>>N;
	factorial=fact(N);
	cout<<factorial<<endl;
	return 0;
}
