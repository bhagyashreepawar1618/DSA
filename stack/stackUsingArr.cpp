#include<bits/stdc++.h>
using namespace std;

//simple stack implementation using array
class stImplarr
{
    public:
    int st[10];
    int top=-1;

    //push operation
    public:
    void push(int x)
    {
        //check overflow condition
        if(top==9)
        {
            cout<<"stack is full.."<<endl;
        }
        else
        {
            top=top+1;
            st[top]=x;
            cout<<"element added successfully..."<<endl;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"underflow..."<<endl;
        }
        else
        {
            top=top-1;
            cout<<"element popped.."<<endl;
        }
    }

    int Top()
    {
        if(top==-1)
        {
            cout<<"empty"<<endl;
            return -1;
        }
        else
        {
            return st[top];
        }
    }

    int size()
    {
        return top+1;
    }

    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    stImplarr s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(100);
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();
    cout<<"size of the stack is="<<s.size()<<endl;
    cout<<"top element is"<<s.Top()<<endl;
    s.push(150);
    s.display();
    return 0;
}


