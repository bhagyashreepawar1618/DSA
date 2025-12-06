#include<bits/stdc++.h>
using namespace std;

//creating node
class Node
{
	public:
	int data;
	Node* next;
	
	public:
	Node(int data1,Node* next1)
	{
		data=data1;
		next=next1;
	}
	
	public:
	Node(int data1)
	{
		data=data1;
		next=nullptr;
	}
};

//creating a function to convert array to linkedlist
Node* convertarray2LL(vector<int> &arr)
{
	Node* head=new Node(arr[0]);
	Node* mover=head; 
	for(int i=1;i<arr.size();i++)
	{
		Node* temp=new Node(arr[i]);
		mover->next=temp;
		mover=mover->next;
	}
	return head;
}

int main()
{
	vector <int> arr={10,20,30,40};
	Node* head=convertarray2LL(arr);
	cout<<head;
	return 0;
}
