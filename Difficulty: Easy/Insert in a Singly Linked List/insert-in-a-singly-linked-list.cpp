/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
}; */

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        // code here
        Node* temp=head;
        
        if(pos==1){
            Node* newHead= new Node(val);
            newHead->next=head;
            return newHead;
        }
        
        int count=0;
        while(temp!= nullptr){
            count++;
            if(count==pos-1){
                Node* newNode=new Node(val);
                newNode->next=temp->next;
                temp->next=newNode;
                break;
            }
            temp=temp->next;
        }
        
        return head;
    }
};