class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        Node* newnode = new Node(val);
        if (pos == 1) 
        {
            newnode->next = head;
            return newnode;
        }
        Node* temp = head; int i=1;
        while(i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next= newnode;
        return head;
        
        
    }
};
