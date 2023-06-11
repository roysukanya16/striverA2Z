// Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverseList(Node* &head) {

        if (head == NULL||head->next==NULL)
            return head;

        Node* nnode = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return nnode;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node*slow=head;
        Node *fast = head;
        
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverseList(slow->next);
        
        Node*ptr=head;
        // while(ptr!=NULL) cout<<ptr->data;
        // ptr=head;
        slow=slow->next;
        while(slow!=NULL){
            if(slow->data!=ptr->data){
                return 0;
            }
            slow=slow->next;
            ptr=ptr->next;
        }
        return 1;
        
    }
};
