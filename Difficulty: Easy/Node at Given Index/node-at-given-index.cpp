/* Node Structure
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
    int getNode(Node* head, int k) {
        // code here
        int count=1;
        Node* temp=head;
        while(temp!=nullptr){
            if(count==k){
                return temp->data;
            }
            temp=temp->next;
            count++;
        }
        return -1;
    }
};