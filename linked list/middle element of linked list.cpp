// Input:
// LinkedList: 1->2->3->4->5
// Output: 3 
// Explanation: 
// Middle of linked list is 3.


/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node *ptr=head;
        Node *ptr2=head;
        while(ptr2!=NULL && ptr2->next!=NULL){
            ptr=ptr->next;
            ptr2=ptr2->next->next;
        }
        
        return ptr->data;
    }
};
