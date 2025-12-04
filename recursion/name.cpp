#include<iostream>
using namespace std;
int count=0;
void print()
{
	if(count==5)
	{
		return;
	}
	cout<<"Bhagyashree pawar"<<endl;
	count+=1;
	print();
}

int main()
{
	print();
	return 0;
}
