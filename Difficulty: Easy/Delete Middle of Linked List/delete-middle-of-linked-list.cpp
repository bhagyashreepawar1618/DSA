/* Node Structure
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* deleteMid(Node* head) {
        // code here
        if(head->next==nullptr){
            return nullptr;
        }
        
        Node* temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        
        int mid=count/2;
        
        count=0;
        temp=head;
        while(temp!=nullptr){
            count++;
            if(count==mid){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
            
        }
        
        return head;
    }
};