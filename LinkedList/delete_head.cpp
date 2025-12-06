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

//delete head of LL
Node* deletehead(Node* head)
{
	if(head==NULL)return head;
	Node* temp=head;
	head=head->next;
	delete temp;
	return head;
}

int main()
{
	vector <int> arr={10,20,30,40,50};
	Node* head=convertTOLL(arr);
	PrintLL(head);
	head=deletehead(head);
	cout<<endl;
	PrintLL(head);
	return 0;
	
	
}

