/* Definition of a Linked List Node
class Node
{
  public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int key) {

        if (key < head->data) {
            Node* newHead = new Node(key);
            newHead->next = head;
            return newHead;
        }

        Node* temp = head;

        while (temp->next != nullptr) {

            if (temp->next->data > key) {
                Node* newNode = new Node(key);
                newNode->next = temp->next;
                temp->next = newNode;
                return head;
            }

            temp = temp->next;
        }

        // Insert at last
        Node* newNode = new Node(key);
        temp->next = newNode;

        return head;
    }
};