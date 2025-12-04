#include<iostream>
#include<string>
using namespace std;
bool reversestring(int n,int m,string &str,string str3)
{
	if(n>m)
	{
		if(str==str3)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	swap(str[n],str[m]);
	return reversestring(n+1,m-1,str,str3);
	
}
int main()
{
	string str1;
	cout<<"Enter a string="<<endl;
	cin>>str1;
	string str2=str1; //copy of the original string
	int length=str1.length();
	cout<<reversestring(0,length-1,str1,str2);
	return 0;
}
