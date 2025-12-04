#include<iostream>
#include<string>
using namespace std;
void reversestring(int n,int m,string &str)
{
	if(n>m)
	{
		return;
	}
	swap(str[n],str[m]);
	reversestring(n+1,m-1,str);
}
int main()
{
	string str1;
	cout<<"Enter a string="<<endl;
	cin>>str1;
	string str2=str1; //copy of the original string
	int length=str1.length();
	reversestring(0,length-1,str1);
	
	cout<<"Reversed string is="<<str1<<endl;
	if(str2==str1)
	{
		cout<<"String is a Palindrome String"<<endl;
	}
	else
	{
		cout<<"String is not Palindrome string"<<endl;
	}
	return 0;
}
