#include<iostream>
using namespace std;
//reverse an array
int main()
{
	//initialisation at the time of declaration
	int arr[10]={10,30,40,70,80,90,100,50,90,40};
	
	//reversing the created array
	for(int i=0,j=9;i<=5,j>=5;i++,j--)
	{
		swap(arr[i],arr[j]);
	}
	
	//display the reversed array
	cout<<"Your Reversed Array Is=";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
