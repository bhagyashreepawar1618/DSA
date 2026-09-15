/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {

        if (headRef == nullptr)
            return headRef;

        int prevdata = headRef->data;
        Node* prevptr = headRef;

        Node* temp = headRef->next;

        while (temp != nullptr) {

            if (temp->data == prevdata) {
                prevptr->next = temp->next;

                if (temp->next != nullptr)
                    temp->next->prev = prevptr;

                temp = temp->next;
            }
            else {
                prevdata = temp->data;
                prevptr = temp;
                temp = temp->next;
            }
        }

        return headRef;
    }
};