#include<iostream>
using namespace std;

void rightrotate(int arr[],int k,int s)
{
	if(k>s)
	{
		k=k%s;
	}
	if(k==0)
	{
		return;
	}
	int temp=arr[s-1];
	
	//copy of array
	int dup[s-1];
	for(int i=0;i<s-1;i++)
	{
		dup[i]=arr[i];
	}
	
	//rotate
	for(int i=0;i<s-1;i++)
	{
		arr[i+1]=dup[i];
	}
	
	arr[0]=temp;
	rightrotate(arr,k-1,s);
	
}

int main()
{
	int n;
	cout<<"size="<<endl;
	cin>>n;
	int array[n];
	
	//input elements in array
	cout<<"Enetr elements="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int l;
	cout<<"how many times you have to right rotate the array=";
	cin>>l;
	cout<<endl;
	
	//functioncall
	rightrotate(array,l,n);
	//display array
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
