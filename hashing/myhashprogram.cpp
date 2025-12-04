#include<iostream>
using namespace std;

void find(int size,int arr[],int hash[],int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==10)
		{
			hash[0]+=1;
		}
		else if(arr[i]==20)
		{
			hash[1]+=1;
		}
		else if(arr[i]==30)
		{
			hash[2]+=1;
		}
		else if(arr[i]==40)
		{
			hash[3]+=1;
		}
		else if (arr[i]==50)
		{
			hash[4]+=1;
		}
 	}
 	cout<<"Number of times it appeared="<<hash[element]<<endl;
}
	
//}
int main()
{
	int n;
	cout<<"Enter The Size of The Array="<<endl;
	cin>>n;
	int myarray[n];
    
	//creating hasharray
	int hasharray[n];
	for(int i=0;i<n;i++)
	{
		hasharray[i]=0;
	}
	
	//print hasharray
	cout<<"Created Hash Array is=";
	for(int i=0;i<n;i++)
	{
		cout<<hasharray[i]<<" ";
	}
	cout<<endl;
	
	//creating my array taking input
	for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i<<" elemt of array="<<endl;
		cin>>myarray[i];
	}
	
	//display your created array
	cout<<endl<<"Your Array Is=";
	
	for (int i=0;i<n;i++)
	{
		cout<<myarray[i]<<" ";
	}
	
	cout<<endl<<"Enter element you have to count 0=10,1=20,2=30 etc till 50=";
	int number;
	cin>>number;
	cout<<endl;
	find(n,myarray,hasharray,number);
	return 0;
	
}
