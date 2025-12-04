#include<iostream>
using namespace std;

//find second largest element in array without sorting 

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
	
	//second largest with sorting
	///bubble sort
	
	for(int i=1;i<size;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(myarray[j]>myarray[j+1])
			{
				swap(myarray[j],myarray[j+1]);
			}
	    }
	}
	
	cout<<"Your sorted Array is=";
	for (int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	cout<<endl;
	
	int slargest;
	for(int i=size-2;i>=0;i--)
	{
		if(myarray[i]!=myarray[size-1])
		{
			slargest=myarray[i];
			break;
		}
	}
	cout<<"Second largest element is="<<slargest;
	return 0;
}
