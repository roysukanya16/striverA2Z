// Input:
// LinkedList: 4->5->6
// Output: 457 

//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
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
    Node* addOne(Node *head) {
        //Node*ptr=head;
        Node*rev=help(head);
        Node*ptr=rev;
        if(ptr->data<9){
            ptr->data+=1;
            
        }
        else if(ptr->data == 9){
            while(ptr->data==9&&ptr->next!=NULL){
                ptr->data=0;
                ptr=ptr->next;
                
            }
            if(ptr->next==NULL&&ptr->data==9){
                ptr->data=0;
                Node* t=new Node(1);
                t->next=NULL;
                ptr->next=t;
            }
            else
                ptr->data+=1;
            
            
        }
        ptr=rev;
        Node* ans=help(rev);
        return ans;
        
    }
};
