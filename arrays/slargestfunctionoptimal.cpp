#include<iostream>
using namespace std;

int slargest(int arr[],int size)
{
	int largest=arr[0];
	int slargest=0;
	for(int i=1;i<size;i++)
	{
		if(arr[i]>largest)
		{
			slargest=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && arr[i]>slargest)
		{
			slargest=arr[i];
		}
	}
	return slargest;
	
}

int ssmallest(int arr[],int size)
{
	int smallest=arr[0];
	int ssmallest=0;
	for(int i=1;i<size;i++)
	{
		if(arr[i]<smallest)
		{
			ssmallest=smallest;
			smallest=arr[i];
		}
		else if(arr[i]>smallest && arr[i]>ssmallest )
		{
			ssmallest=arr[i];
		}
		
	}
	return ssmallest;
}

int main()
{
	int size;
	cout<<"Enter size of the array="<<endl;
	cin>>size;
	int marray[size];
	
	//takin ginput in an array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter element="<<endl;
		cin>>marray[i];
	}
	
	//display array
	cout<<"Your Created array is=";
	for(int i=0;i<size;i++)
    {
    	cout<<marray[i]<<" ";
	}
	cout<<endl;
	
	cout<<"second largest element of array is="<<slargest(marray,size)<<endl;
	cout<<"second smallest element of array is="<<ssmallest(marray,size)<<endl;
	return 0;
	
}
