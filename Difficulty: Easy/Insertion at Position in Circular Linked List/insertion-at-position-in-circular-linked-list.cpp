/* Structure of circular linked list Node
class Node {
  public:
    Node* next;
    int data;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* insertNodeAtPos(Node* head, int pos, int x) {

        Node* newNode = new Node(x);

        // Empty circular linked list
        if (head == nullptr) {
            if (pos == 0) {
                newNode->next = newNode;
                return newNode;
            }
            return head;
        }

        // Insert at position 0
        if (pos == 0) {
            Node* temp = head;

            while (temp->next != head) {
                temp = temp->next;
            }

            temp->next = newNode;
            newNode->next = head;

            return newNode;
        }

        // Insert at any other position
        Node* temp = head;

        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        return head;
    }
};