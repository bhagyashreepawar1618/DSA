#include<bits/stdc++.h>
using namespace std;
//reverse array approach
//optimal approach for rotation by k places 
//devide array in 2 then reverse them both
//again reverse the whole array

void reversearray(int arr[],int start,int n,int k)
{
	reverse(arr+start,arr+k);
	reverse(arr+k,arr+n);
	reverse(arr+start,arr+n);
}


int main()
{
	int s;
	cout<<"Enter the size of the array="<<endl;
	cin>>s;
	int arrayy[s];
	
	//taking inputs in array
	cout<<"Enter Elements Of Array="<<endl;
	for(int i=0;i<s;i++)
	{
		cin>>arrayy[i];
	}
	
	//display created array
	cout<<"Your Array is=";
	for(int i=0;i<s;i++)
	{
		cout<<arrayy[i]<<" ";
	}
	cout<<endl;
	
	//ask rotation
	int d;
	cout<<"How many times you have to left rotate the array?";
	cin>>d;
	cout<<endl;
	
	//function call
	reversearray(arrayy,0,s,d);
	
	//display the roatted array
	cout<<"Your Rotated  Array is=";
	for(int i=0;i<s;i++)
	{
		cout<<arrayy[i]<<" ";
	}
	cout<<endl;
	
	
	
	return 0;
	
}
