#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter size of arrray="<<endl;
	cin>>size;
	int myarray[size];
	
	//take input in array
	for (int i=0;i<size;i++)
	{
		cout<<"Enter element=";
		cin>>myarray[i];
	}
	cout<<endl;
	
	//display created array
	cout<<"Your created Array is=";
	for (int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	cout<<endl;
	
	//finding greatest element in the array
	int max=myarray[0];
	for(int i=1;i<size;i++)
	{
		if(myarray[i]>max)
		{
			max=myarray[i];
		}
	}
	cout<<"Greatest Element in Array is="<<max<<endl;
	return 0;
}
