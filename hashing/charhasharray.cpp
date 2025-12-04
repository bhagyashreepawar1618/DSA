#include<iostream>
using namespace std;
//program to hash a string  using hash array
int main()
{
	//creating string
	string s;
	cout<<"Enter a string="<<endl;
	cin>>s;
	
	int l=s.length();
		
	//finding greatest element present in string
	int great=s[0];
	for(int i=1;i<l;i++)
	{
		if(s[i]>great)
		{
			great=s[i];
		}
	}
	char alphabet=great;
	cout<<"Greatest element in string is="<<alphabet<<endl;
	//hashing precompute
	int hasharray[great+1]={0};   //becos hme 1 pe 1 ki values store krni hai 0 se start nhi krna hai
	for(int i=0;i<l;i++)
	{
		{
			hasharray[s[i]]++;
		}
	}
	
	int q;
	cout<<"Enter how many elements you have to check for="<<endl;
	cin>>q;
	char ch;
	while(q>0)
	{
		cout<<"which char you have to check for?"<<endl;
		cin>>ch;
		cout<<hasharray[ch]<<endl;
		q--;
	}
	return 0;
	
}
