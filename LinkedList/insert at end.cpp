class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* newnode = new Node(x);
        newnode->next = NULL;
        
        if(head == NULL)
        {
            return newnode;
        }
        
        Node*temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        
        return head;
    }
};
