#include<iostream>
using namespace std;

int count=1;
void printnum()
{
	
	if(count==11)      //base condition
	{
		return;
	}
	cout<<count<<endl;
	count+=1;
	printnum();
}
int main()
{
	
	printnum();
	return 0;
}
