#include<bits/stdc++.h>
using namespace std;

//function for intersection of two sorted arrays
//we will take the lement which is present in both the arrays
//duplicates are allowed 

vector <int> intersecarr(vector <int> a,vector <int> b)
{
	int n1=a.size();
	int n2=b.size();
	
	int i=0,j=0;
	vector <int> interarr;
	while(i<n1 && j<n2)
	{
		if(a[i]==b[j])
		{
			interarr.push_back(a[i]);
			j++;i++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else
		{
			j++;
		}
    }
		
	
	return interarr;
}

int main()
{
	
	int n1,n2;
	cout<<"Enter Size of 1st Array=";
	cin>>n1;
	cout<<endl<<"Enter size of 2nd array=";
	cin>>n2;
	vector <int> arr1(n1),arr2(n2);
	
	//input in 1st array
	cout<<endl<<"Enter Elements Of 1st array="<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	
	//input in arr2
	cout<<"Enter Elements Of 2nd array="<<endl;
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	cout<<endl;
	
	//display 1st array then 2nd
	cout<<endl<<"1st array=";
	for(int i=0;i<n1;i++)
	{
		cout<<arr1[i]<<" ";
	}

	cout<<endl<<"2nd array=";
	for(int i=0;i<n2;i++)
	{
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
	vector <int> result=intersecarr(arr1,arr2);
	
	cout<<"Your Resultant array is=";
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<" ";
	}
	return 0;
}
