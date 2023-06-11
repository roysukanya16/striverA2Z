// Given a singly linked list of size N. The task
// is to left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.
// Input:
// N = 5
// value[] = {2, 4, 7, 8, 9}
// k = 3
// Output: 8 9 2 4 7
// Explanation:
// Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
// Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
// Rotate 3: 8 -> 9 -> 2 -> 4 -> 7

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


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* help(Node *head)
    {
        Node *prev=NULL,*curr=head,*next=curr;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node*ptr = head;
        Node*prev=ptr;
        
        k--;
        while(k&&ptr->next!=NULL){
            
            ptr=ptr->next;
            k--;
        }
        if(ptr->next!=NULL){
            Node *temp=ptr->next;
            ptr->next=NULL;
            
            
            ptr=temp;
            
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            
            ptr->next=head;
            
            return temp;
        }
        return head;
    }
};
    
