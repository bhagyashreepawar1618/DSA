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

//count length of LL
int lengthLL(Node* head)
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

//delete element if value is given
Node* deletevalue(Node* head,int el)
{
	//when head is the element
	if(head->data==el)
	{
		Node* temp=head;
		head=head->next;
		delete temp;
		return head;
	}
	
	//other than head
	Node* temp=head;
	Node* previous=NULL;
	while(temp!=nullptr)
	{
		if(temp->data==el)
		{
			previous->next=previous->next->next;
			delete temp;
			return head;
		}
		previous=temp;
		temp=temp->next;
	}
	//when no change in LL
	return head;
}

int main()
{
	vector <int> arr={10,20,30,40,50,60,70,80,90,100};
	Node* head=convertLL(arr);
	printLL(head);
	cout<<"Length of the Linked list is="<<lengthLL(head);
	//delete element
	int el;
	cout<<endl<<"Enter Element you have to delete?"<<endl;
	cin>>el;
	head=deletevalue(head,el);
	printLL(head);
	return 0;
	
}

