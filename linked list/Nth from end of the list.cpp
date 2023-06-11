// Input:
// N = 2
// LinkedList: 1->2->3->4->5->6->7->8->9
// Output: 8
// Explanation: In the first example, there
// are 9 nodes in linked list and we need
// to find 2nd node from end. 2nd node
// from end is 8.  

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* ptr=head;
       int cnt=0;
       while(ptr!=NULL){
           ptr=ptr->next;
           cnt++;
       }
       
       int k = cnt-n+1;
       
       if(k<=0||k>cnt) return -1;
       
       ptr=head;
       k--;
       while(k){
           ptr=ptr->next;
           k--;
       }
       
       return ptr->data;
       
}
