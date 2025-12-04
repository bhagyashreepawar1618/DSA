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

//delete head of doubly Linked list
Node* deletehead(Node* head)
{
	Node* temp=head;
	head=head->next;
	head->back=nullptr;
	temp->next=nullptr;
	delete temp;
	return head;
}

//delete tail
Node* deleteTail(Node* head)
{
	Node* temp=head;
	while(temp!=nullptr)
	{
		if(temp->next->next==nullptr)
		{
			Node* next=temp->next;
			temp->next->back=nullptr;
			temp->next=nullptr;
			delete next;
			return head;
		}
		temp=temp->next;
	}
	return head;
}

int main()
{
	vector <int> arr={10,20,30,40,50,60,70,80,90,100};
	Node* head=convert2LL(arr);
	Print2LL(head);
	head=deletehead(head); 
	Print2LL(head);
	head=deleteTail(head); 
	Print2LL(head);
	head=deleteTail(head); 
	Print2LL(head);
	head=deleteTail(head); 
	Print2LL(head);
	head=deleteTail(head); 
	Print2LL(head);
	return 0;
}
