class Solution {
  public:
    void linkDelete(Node* head, int n, int m) {

        Node* temp = head;

        int countm = 1;

        while(temp != nullptr) {

            // Skip m nodes
            while(countm < m && temp->next != nullptr) {
                temp = temp->next;
                countm++;
            }

            // Delete next n nodes
            int countn = n;

            while(countn > 0 && temp->next != nullptr) {
                temp->next = temp->next->next;
                countn--;
            }

            // Move to next node which we kept
            temp = temp->next;

            countm = 1;
        }
    }
};