/* LinkedList Node structure
c;ass Node {
  public:
    bool data;   // data is either 0 or 1
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int decimalValue(Node* head) {

        int sum = 0;
        Node* temp = head;

        while (temp != nullptr) {
            sum = (sum * 2 + temp->data ) % 1000000007;
            temp = temp->next;
        }

        return sum;
    }
};
