#include<iostream>
using namespace std;
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int index=0;
	int temp[10];
	for(int j=0;j<10;j++)
	{
		if(arr[j]!=arr[j+1])
		{
			temp[index]=arr[j];
			index++;
			cout<<j<<"executed"<<endl;
		}
		if(j==9)
		{
			arr[index]=arr[j];
			cout<<"yes"<<endl;
		}
	}
	cout<<"new array is="<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<temp[i]<<" ";
	}
	//{1,2,3,4,5}
	return 0;
}
