#include<iostream>
using namespace std;
//checks if array is palindrome or not retuens true false
bool check(int i,int arr[],int len)
{
	if(arr[i]!=arr[len-i-1])
	{
		return false;
	}
	if(i>len/2)
	{
		return true;
	}
	return check(i+1,arr,len);
}
int main()
{
	int n;
	cout<<"Enter size="<<endl;
	cin>>n;
	int arrayy[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element="<<endl;
		cin>>arrayy[i];
	}
	cout<<check(0,arrayy,n);
	return 0;
}
