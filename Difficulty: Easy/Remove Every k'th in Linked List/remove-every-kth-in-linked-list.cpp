/* Structure for Link list node
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
    Node* deleteK(Node* head, int K) {

        if (head == nullptr || K <= 0)
            return head;

        // Delete every Kth node
        if (K == 1) {
            while (head != nullptr) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
            return nullptr;
        }

        Node* temp = head;
        int count = 1;

        while (temp != nullptr && temp->next != nullptr) {

            if (count == K - 1) {
                Node* del = temp->next;
                temp->next = temp->next->next;
                delete del;
                count = 0;
            }

            count++;
            temp = temp->next;
        }

        return head;
    }
};