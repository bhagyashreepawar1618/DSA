/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

*/
class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        if(head->next==nullptr){
            return head;
        }
        
        Node* temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        
        Node* newHead=new Node(temp->next->data);
        newHead->next=head;
        temp->next=nullptr;
        
        return newHead;
    }
};