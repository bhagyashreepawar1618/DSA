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

//array to LL
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

void traverseLL(Node* head)
{
	Node* temp=head;
	cout<<"Your Linked List is=";
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
}

//length of ll
int lengthofLL(Node* head)
{
	Node* temp=head;
	int count=0;
	while(temp!=nullptr)
	{
		count++;
		temp=temp->next;
	}
	return count;
}

//search in LL
int checkIFpresent(Node* head,int value)
{
	Node* temp=head;
	while(temp!=nullptr)
	{
		if(temp->data==value)
		{
			return 1;
		}
		temp=temp->next;
	}
	return 0;
}
int main()
{
	vector <int> arr={10,20,25,30,40,55,60,100};
	Node* head=convertarray2LL(arr);
	traverseLL(head); 
	cout<<endl<<"length of LL is="<<lengthofLL(head)<<endl;
	
	int value;
	cout<<"Enter value to be searched=";
	cin>>value;
	cout<<endl;
	
	int answer=checkIFpresent(head,value);
	if(answer==1)
	{
		cout<<"elemnt is found"<<endl;
	}
	else
	{
		cout<<"element is not found"<<endl;
	}
	
	return 0;
}
