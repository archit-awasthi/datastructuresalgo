class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        Node* newnode = new Node(x);
        if(head == NULL) return newnode;
        newnode->next = head;
        head = newnode;
        return head;
        
    }
};
