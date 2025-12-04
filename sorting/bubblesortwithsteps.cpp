#include<iostream>
using namespace std;

//program for bubble sort
int main()
{
	int size;
	cout<<"Enter size of the Array="<<endl;
	cin>>size;
	int myarr[size];
	
	//taking input in an array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i<<" th element of array=";
		cin>>myarr[i];
	}
	
	//display created array
	cout<<"Your created array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	//bubblesort
	//find the largest element of array and place it at the last index then fix its position
	//for inner for loop, condition will change every time
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<=size-i-1;j++)
		{
			if(myarr[j]>myarr[j+1])
			{
				swap(myarr[j],myarr[j+1]);
			}
		}
	}
	
	//display sorted array
	cout<<"Sorted Array is=";
	for(int i=0;i<size;i++)
	{
		
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
