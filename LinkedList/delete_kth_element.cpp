#include<bits/stdc++.h>
using namespace std;

//user defined data structure
class Node{
	public:
		int data;
		Node* next;
		
		//constructor
		Node(int data1)
		{
			data=data1;
			next=nullptr;
		}
};

//function to covert array into linked list
Node* convertTOLL(vector <int> &arr)
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

//function to print linked list
void PrintLL(Node* head)
{
	Node* temp=head;
	cout<<"YOUR LINKEDLIST IS=";
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

//delete kth element of LL
Node* KthElement(Node* head,int k) 
{
	//if k==1 first element delete krne ke liye
	if(k==1)
	{
		Node* temp=head;
		head=head->next;
		delete temp;
		return head;
	}
	
	
	//if k is other than 1st element
	Node* temp=head;
	int count=0;
	Node* previous=NULL;
	while(temp!=nullptr)
	{
		count++;
		if(count==k)
		{
			previous->next=previous->next->next;
			delete temp;
			break;
		}
		previous=temp;
		temp=temp->next;
	}
	return head;
} 

int main()
{
	vector <int> arr={10,20,30,40,50};
	Node* head=convertTOLL(arr);
	PrintLL(head);
	int k;
	cout<<endl<<"Enter Position you want to delete=";
	cin>>k;
	head=KthElement(head,k);
	cout<<endl; 
	PrintLL(head);
	return 0;
	
	
}
