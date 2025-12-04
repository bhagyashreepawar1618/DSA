#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of array="<<endl;
	cin>>size;
	int myarray[size];
	
	//input in an array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i<<" th element of array=";
		cin>>myarray[i];
	}
	cout<<endl;
	
	//display created array
	cout<<"Your created array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	cout<<endl;
	
	//insertion sort logic 
	//go to left and check if element is small then swap
	//swap till it can be swapped break condition is if left element is smaller then stop
	//first consider only  1 size array then 2 then 3 till whole size
	for(int i=1;i<size;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(myarray[j]<myarray[j-1])
			{
				swap(myarray[j],myarray[j-1]);
			}
		}
	}
	
	//display sorted array
	cout<<"Your insertion sort array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	cout<<endl;
}
