/* Linked List Node Structure
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        Node* temp=head;
        
        if(head->next ==nullptr){
            delete(head);
            return nullptr;
        }
        while(temp->next->next != nullptr){
            temp=temp->next;
        }
        Node* nodetoDelete=temp->next;
        temp->next=nullptr;
        delete(nodetoDelete);
        return head;
        
    }
};