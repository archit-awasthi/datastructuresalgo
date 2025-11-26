class Solution {
  public:
    Node* removeLastNode(Node* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return NULL;
        Node*temp = head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        delete temp->next;
        temp->next = NULL;
        
        return head;
    }
    
    
};
