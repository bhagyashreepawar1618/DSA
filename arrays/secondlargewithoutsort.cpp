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
	
	//simply travesrse and find largest element of array
	int max=myarray[0];
	for(int i=1;i<size;i++)
	{
		if(myarray[i]>max)
		{
			max=myarray[i];
		}
	}
	cout<<"Largest elemenet of array is="<<max<<endl;
	
	//find second largest element inn arry
	//check an extra condition that it should not be equal to largest
	int smax=myarray[0];
	for(int i=1;i<size;i++)
	{
		if(myarray[i]>smax && myarray[i]!=max)
		{
			smax=myarray[i];
		}
	}
	cout<<" 2nd Largest elemenet of array is="<<smax<<endl;
	return 0;
}
