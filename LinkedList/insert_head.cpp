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

//insert element at head
Node* insertvalue(Node* head,int el)
{
	Node* temp=new Node(el);
	temp->next=head;
	head=temp;
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
	head=insertvalue(head,el);
	printLL(head);
	return 0;
	
}

