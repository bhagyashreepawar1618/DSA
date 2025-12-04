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
	//pehle sort karenge then last element hoga greates hoga
	//bubble sort
	for(int i=1;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(myarray[j]>myarray[j+1])
			{
				swap(myarray[j],myarray[j+1]);
			}
		}
	}
	cout<<"Greatest Element in Array is="<<myarray[size-1]<<endl;
	return 0;
}
