/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code here
        set<int> st;
        
        Node* temp2=head2;
        while(temp2!=nullptr){
            st.insert(temp2->data);
            temp2=temp2->next;
        }
        
        Node* temp1=head1;
        Node* newNode=nullptr;
        Node* newHead=nullptr;
        while(temp1!=nullptr){
            if(st.find(temp1->data)!= st.end() && newNode==nullptr ){
                newNode= new Node(temp1->data);
                newHead=newNode;
            }
            else if(st.find(temp1->data) != st.end()){
                Node* newTemp=new Node(temp1->data);
                newNode->next=newTemp;
                newNode=newTemp;
            }
            temp1=temp1->next;
        }
        return newHead;
    }
};