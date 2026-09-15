/* Structure of Linked List Node
class Node
{
    int data;
    Node *next;

    Node(int x){
        int data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    void deleteAlt(Node *head) {
        // code here
        Node* temp=head;
        Node* prev;
        while(temp!=nullptr && temp->next!=nullptr){
            Node* del=temp->next;
            temp->next=del->next;
            delete del;
            temp=temp->next;
        }
    }
};