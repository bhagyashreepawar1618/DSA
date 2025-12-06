#include<bits/stdc++.h>
using namespace std;

//create node class
class Node{
	public:
	int data;
	Node* next;
	
	//constructor with deafault value of nulll pointer
	Node(int data1)
	{
		data=data1;
		next=nullptr;
	}
};

//function to convert arr to linked list which will return head
Node* ConvertLL(int arr[],int n)
{
	Node* head=new Node(arr[0]);
	Node* mover=head;
	
	for(int i=1;i<n;i++)
	{
		Node* temp=new Node(arr[i]);
		mover->next=temp;
		mover=temp;
	}
	return head;
}

//function to print linked list when head is passed as an argument
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

//function to add/insert a value before given value x
Node* insertBeforeValue(Node* head,int el,int value)
{
	// Case 1: insert before head itself
    if (head->data == el)
    {
        Node* newN = new Node(value);
        newN->next = head;
        head = newN;
        return head;
    }
    
    Node* temp=head;
	while(temp!=nullptr)
	{
		if(temp->next->data==el)
		{
			Node* newN=new Node(value);
			newN->next=temp->next;
			temp->next=newN;
			return head;
		}
		temp=temp->next;
	}
	return head;
}

int main()
{
	int n;
	cout<<"Enter size of array=";
	cin>>n;
	cout<<endl;
	
	int arr[n];
	
	cout<<"Entet elements of array=";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	
	cout<<"array=";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	Node* head=ConvertLL(arr,n);
	printLL(head);
	
	//take input of value you have to insert
	int value;
	cout<<"Enter Value you have to insert="<<endl;
	cin>>value;
	
	int el;
	cout<<"Enter list element before you have to insert="<<endl;
	cin>>el;
	
	head=insertBeforeValue(head,el,value);
	printLL(head);
	return 0;
	
}
