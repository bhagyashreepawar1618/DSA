#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter size="<<endl;
	cin>>x;
	int marks[x];
	
	//taking input in array
	for(int i=0;i<x;i++)
	{
		cout <<"enter element="<<endl;
		cin>>marks[i];
	}
	
	//for reversing array
	for(int m=0,n=x-1;m<=x/2,n>=x/2;m++,n--)
	{
		swap(marks[m],marks[n]);
	}
	
	//output of array
	cout<<"Reversed array is=";
	for(int j=0;j<x;j++)
	{
		cout<<marks[j]<<" ";
	}
	return 0;
	
}
