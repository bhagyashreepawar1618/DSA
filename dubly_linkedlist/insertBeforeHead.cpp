#include<bits/stdc++.h>
using namespace std;

//representation of doubly linked list
class Node{
	public:
		int data;
		Node* next;
		Node* back;
		
		//constructor
		Node(int data1,Node* next1, Node* back1)
		{
			data=data1;
			next=next1;
			back=back1;
		}
		
		//default constructor
		Node(int data1)
		{
			data=data1;
			next=nullptr;
			back=nullptr;		
		}
	};
	
//convert array to doubly linked list
Node* convert2LL(vector<int> &arr)
{
	Node* head=new Node(arr[0]);
	Node* prev=head;
	for(int i=1;i<arr.size();i++)
	{
		Node* temp=new Node(arr[i],nullptr,prev);
		prev->next=temp;
		prev=temp;
	}
	return head;
}

//print doubly linked list
void Print2LL(Node* head)
{
	Node* temp=head;
	cout<<"Your Doubly Linked List is=";
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

//insert value before head
Node* insertBhead(Node* head,int val)
{
	Node* newhead=new Node(val,head,nullptr);
	head->back=newhead;
	return newhead;
}

//insert before tail
Node* insertBTail(Node* head,int val)
{
	Node* temp=head;
	while(temp!=nullptr)
	{
		if(temp->next==nullptr)
		{
			break;
		}
		temp=temp->next;
	}
	
	///now we have got our temp pointing to tail
	Node* newn=new Node(val,nullptr,temp->back);
	temp->back->next=newn;
	newn->next=temp;
	temp->back=newn;
	return head;
}

int main()
{
	vector <int> arr={10,20,30,40,50,60,70,80,90,100};
	Node* head=convert2LL(arr);
	Print2LL(head);
	head=insertBhead(head,5);
	Print2LL(head);
	head=insertBTail(head,110);
	Print2LL(head);
	
	return 0;
}
