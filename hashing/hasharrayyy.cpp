#include<iostream>
using namespace std;
//program to hash an array using hash array
int main()
{
	//creating array
	int size;
	cout<<"Enter size of the array="<<endl;
	cin>>size;
	int myarray[size];
	
	//taking inputs in array using for loop
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i<<" th element in array="<<endl;
		cin>>myarray[i];
	}
	
	//finding greatest element present in array
	int great=myarray[0];
	for(int i=1;i<size;i++)
	{
		if(myarray[i]>great)
		{
			great=myarray[i];
		}
	}
	
	cout<<"Greatest element in array is="<<great<<endl;
	//hashing precompute
	int hasharray[great+1]={0};   //becos hme 1 pe 1 ki values store krni hai 0 se start nhi krna hai
	for(int i=0;i<size;i++)
	{
		{
			hasharray[myarray[i]]++;
		}
	}
	
	int q;
	cout<<"Enter how many numbers you have check for="<<endl;
	cin>>q;
	int num;
	while(q>0)
	{
		cout<<"which number you have to check?"<<endl;
		cin>>num;
		cout<<hasharray[num]<<endl;
		q--;
	}
	return 0;
	
}
