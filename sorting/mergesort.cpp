#include<bits/stdc++.h>
using namespace std;

//void merge(int arr[],int low, int mid,int high);
//function to merge and sort devide arrays 
void merge(int arr[],int low,int mid,int high)
	{
		vector <int> temp;
		int left=low;
		int right=mid+1;
	
		while(left<=mid && right<=high)
		{
			if(arr[left]<=arr[right])
			{
				temp.push_back(arr[left]);
				left++;
			}
			else
			{
				temp.push_back(arr[right]);
				right++;
			}
		}
	
		while(left<=mid)
		{
			temp.push_back(arr[left]);
			left++;
		}	
		while(right<=high)
		{
			temp.push_back(arr[right]);
			right++;	
		}
	    //copy temp in array
		for(int i=low;i<=high;i++)
		{
			arr[i]=temp[i-low];
		}
	}

//function for   mergesort (multiple recursive calls)
void mergesort(int arr[],int low,int high)
{
	if(low==high)
	{
		return;
	}
	int mid=(low+high)/2;
	mergesort(arr,low,mid);
	mergesort(arr,mid+1,high);
	merge(arr,low,mid,high);
}
	

int main()
{
	int size;
	cout<<"Enter size of array="<<endl;
	cin>>size;
	int myarray[size];
	
	//input in an array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i<<" th element of array=";
		cin>>myarray[i];
	}
	cout<<endl;
	
	//display created array
	cout<<"Your created array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	cout<<endl;
	
	//function call
	mergesort(myarray,0,size-1);
	
	
	//display sorted array
	cout<<"Your merge sort array is=";
	for(int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}                        
	cout<<endl;
	return 0;
}
