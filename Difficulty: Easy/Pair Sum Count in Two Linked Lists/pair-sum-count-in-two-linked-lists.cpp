/* Structure of a link list node
class Node {
  public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int countPairs(Node* head1, Node* head2, int x) {
        // code here
        
        
        set<int> st1;
        set<int> st2;
        
        Node* temp1=head1;
        Node* temp2=head2;
        
        while(temp1!=nullptr){
            st1.insert(temp1->data);
            temp1=temp1->next;
        }
        
        while(temp2!=nullptr){
            st2.insert(temp2->data);
            temp2=temp2->next;
        }
        
        int count=0;
        for(auto it:st1){
            int needed=x-it;
            if(st2.find(needed)!= st2.end()){
                //count that pair
                count++;
            }
    
        }
        
        return count;
    }
};