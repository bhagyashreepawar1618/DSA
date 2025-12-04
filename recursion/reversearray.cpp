#include<iostream>
using namespace std;
void reversearray(int x,int arr[],int size)
{
	if(x==size-x-1)
	{
		return;
	}
	swap(arr[x],arr[size-x-1]);
	reversearray(x+1,arr,size);
	
}

int main()
{
	int n;
	cout<<"enter size of the array="<<endl;
	cin>>n;
	int marks[n];
	//taking input in an array
	int i=0;
	while(i<n)
	{
		cout<<"Enter "<<i<<" th element="<<endl;
		cin>>marks[i];
		i++;
	}
	reversearray(0,marks,n);
	int j=0;
	while(j<n)
	{
		cout<<marks[j]<<" ";
		j++;
	}
	
	return 0;
}
