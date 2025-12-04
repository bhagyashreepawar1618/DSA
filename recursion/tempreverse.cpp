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
	
	//for reversing array temp
	cout<<"Temp reversed array is=";
	for(int m=x-1;m>=0;m--)
	{
		cout<<marks[m]<<" ";
	}
	cout<<endl;
	
	//print actual array
	cout<<"Actual Array is=";
	for(int i=0;i<x;i++)
	{
		cout <<marks[i]<<" ";
	}
	return 0;
}
