#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"size="<<endl;
	cin>>n;
	int array[n];
	cout<<"Enetr elements="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
	//display array
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	//copy of array
	int dup[n-1];
	for(int i=0;i<n-1;i++)
	{
		dup[i]=array[i];
	}
	
	int temp=array[n-1];
	
	for(int i=0;i<n-1;i++)
	{
		array[i+1]=dup[i];
	}
	
	array[0]=temp;
	
	//display rotated array
	cout<<"right rotated arrayby one palce =";
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
