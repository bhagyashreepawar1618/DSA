/* Structure of a doubly link list node
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int x)
    {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *rotateDLL(Node *head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        int count = 1;
        Node* temp = head;

        while (count < k && temp != nullptr) {
            count++;
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr)
            return head;

        Node* newHead = temp->next;
        newHead->prev = nullptr;
        temp->next = nullptr;

        Node* tail = newHead;

        while (tail->next != nullptr) {
            tail = tail->next;
        }

        tail->next = head;
        head->prev = tail;

        return newHead;
    }
};