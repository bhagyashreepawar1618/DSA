#include<bits/stdc++.h>
using namespace std;

//this is a program to implement stack using linked list
//create a class for node 
class Node
{
    public:
    int data;
    Node* next;

    //constrctor
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }

};

//implementation of stack using linked list
class stUsingLL
{
    public:
    Node* top=nullptr;
    int size=0;
    
    //push function
    public:
    void push(int x)
    {
        Node* temp=new Node(x);
        temp->next=top;
        top=temp;
        size++;
    }

    //pop function
    public:
    void pop()
    {
        //underflow condition
        if(size==0)
        {
            cout<<"empty"<<endl;
        }
        else
        {
            Node* temp=top;
            top=top->next;
            delete temp;
            size--;
        } 
    }

    public:
    //size of the stack
    int Size()
    {
        return size;
    }

    public:
    //top element
    int Top()
    {
        return top->data;
    }

    public:
    //display the LL
    void display()
    {
        while(top!=nullptr)
        {
            cout<<top->data<<" ";
            top=top->next;
        }
    }
};

int main()
{
    stUsingLL s;
    s.pop();
    s.push(100);
    s.push(20);
    s.push(30);
    s.push(50);
    s.display();
    s.pop();
    s.display();
    s.push(80);
    s.display();
    return 0;
}