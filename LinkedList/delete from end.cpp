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

        Node* toDelete = temp->next;
        temp->next = NULL;
        delete temp->next;
      
        return head;
    }
    
    
};
