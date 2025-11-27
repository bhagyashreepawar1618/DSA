#include<bits/stdc++.h>
using namespace std;

//create class for Node
class Node
{
    public:
    int data;
    Node* next;

    //constructor for bot data and next ptr
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }

    //constructor where nullptr is set as default for nextptr
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

//function to convert arr to linked list
Node* convertArrtoLL(int arr[],int n)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    //for elements other than head
    for(int i=1;i<n;i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

//print elements of linked list
void displayLL(Node* head)
{
    Node* temp=head;
    cout<<"Elements of Linked List are=";
    while(temp!=nullptr)
    {
        cout<<temp->next<<" ";
        temp=temp->next;
    }   
}

//size of linked list
int sizeLL(Node* head)
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

int main()
{
    int n;
    cout<<"Enter size of array="<<endl;
    int arr[n];

    cout<<"Enter elements of array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Your array is=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Node* head=convertArrtoLL(arr,n);
    displayLL(head);
    return 0;

}