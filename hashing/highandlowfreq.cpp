#include<iostream>
using namespace std;
//program to calculate highest and lowest fequency element

int countfreq(int count,int n,int arr[])
{
	//base condition
	if(arr[n]!=arr[n+1])
	{
		return count;
	}
	if(arr[n]==arr[n+1])
	{
		count++;
	}
	return countfreq(count,n+1,arr);
	
}
int main()
{
	int size;
	cout<<"Enter size of the array="<<endl;
	cin>>size;
	int myarr[size];

	//taking inputs in array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i<<" th Element of array=";
		cin>>myarr[i];
	}
	cout<<endl;

	//display the created array
	cout<<"Your created array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;

	//find largest element in array
	int high=myarr[0];
	for(int i=1;i<size;i++)
	{
		if(myarr[i]>high)
		{
			high=myarr[i];
		}
	}

	//hash array precompute
	int hasharray[high+1]={0};
	for(int i=0;i<size;i++)
	{
		hasharray[myarr[i]]++;
	}

	//display hash array
	cout<<"Your created hasharray is="<<endl;
	for(int i=0;i<=high;i++)
	{
	
		cout<<i<<"="<<hasharray[i]<<endl;
	}

	//sorting to find element having highest and lowest frequency
	//bubble sort
	
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
	
	//print sorted array
	cout<<"Your sorted array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	int answer=countfreq(1,0,myarr);
	cout<<myarr[0]<<" appears ="<<answer<<" times."<<endl;
	int answer1=countfreq(1,answer-1,myarr);
	cout<<myarr[answer-1]<<" appears ="<<answer1<<" times."<<endl;
	
	
	
	return 0;
}





