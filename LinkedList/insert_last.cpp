#include<bits/stdc++.h>
using namespace std;

//node
class Node{
	public:
	int data;
	Node* next;
	
	public:
	Node(int data1)
	{
		data=data1;
		next=nullptr;
	}	
};

//convert arr to LL
Node* convertLL(vector <int> &arr)
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

//print the LL
void printLL(Node* head)
{
	Node* temp=head;
	cout<<"Your Linked List is=";
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

//insert element at last 
Node* insertvalue(Node* head,int el)
{
	Node* newn=new Node(el);
	Node* temp=head;
	while(temp->next!=nullptr)
	{
		temp=temp->next;
	}
	temp->next=newn;
	return head;
}

//insert last case 2 using previous
Node* insertlast(Node* head,int val)
{
	Node* newm=new Node(val);
	Node* temp=head;
	Node* prev=NULL;
	while(temp!=nullptr)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=newm;
	return head;
	
}

int main()
{
	vector <int> arr={10,20,30,40,50,60,70,80,90,100};
	Node* head=convertLL(arr);   
	printLL(head);
	//insert element
	int el;
	cout<<endl<<"Enter Element you have to insert?";
	cin>>el;
	head=insertlast(head,el);
	printLL(head);
	return 0;
	
}

