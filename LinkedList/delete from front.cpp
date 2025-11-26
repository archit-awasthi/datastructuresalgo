class Solution {
  public:
    Node *deleteHead(Node *head) {
        if(head == NULL) return NULL;
        Node* newhead = head->next;
        delete head;
        return newhead;
        
    }
};
