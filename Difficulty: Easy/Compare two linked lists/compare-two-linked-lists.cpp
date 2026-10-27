/* Linked List Node Structure
class Node {
  public:
    char data;
    Node *next;

    Node(char x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    int compare(Node *head1, Node *head2) {
        // Code Here
        
        while (head1 && head2 && 
                   head1->data == head2->data) 
            {         
                head1 = head1->next;
                head2 = head2->next;
            }

            // If both lists are not empty, 
            // compare mismatching characters
            if (head1 && head2) 
                return (head1->data > head2->data)? 1 : -1;

            // If either of the two lists 
            // has reached end
            if (head1 &&!head2) 
                return 1;

            if (head2 &&!head1) 
                return -1;

            // If none of the above conditions is true,
            // both lists have reached end 
            return 0;
    }
};