// Input:
// N = 3
// value[] = {1,3,4}
// x(position at which tail is connected) = 2
// Output: True
// Explanation: In above test case N = 3.
// The linked list with nodes N = 3 is
// given. Then value of x=2 is given which
// means last node is connected with xth
// node of linked list. Therefore, there
// exists a loop.

//User function template for C++

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        map<Node*,int> mp;
        Node* ptr=head;
        while(ptr!=NULL){
            mp[ptr]++;
            if(mp[ptr]>1){
                return 1;
            }
            ptr=ptr->next;
            
        }
        
        return 0;
    }
};
