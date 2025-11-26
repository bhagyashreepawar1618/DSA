#include<bits/stdc++.h>
using namespace std;

//simple stack implementation using array
class stImplarr
{
    public:
    int s=10;
    int st[s];
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
        }
    }
}

