/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *temp;
struct ListNode* swapPairs(struct ListNode* head)
{
int data1,count=0;

    temp=head;
    while(temp!=NULL)
    {
        count=count+1;
        temp=temp->next;
    }
    temp=head;
    if(head==NULL)
    {
        return head;
    }
    else if(temp->next==NULL)
    {
        return head;
    }
    else if(count%2==0)
    {
        temp=head;
        for(temp;temp!=NULL;temp=temp->next->next)
            {
                 data1=temp->val;
                 temp->val=temp->next->val;
                 temp->next->val=data1;
            }
        return head;
    }
    else
    {
        int n,i=0;
        n=count/2;
        temp=head;
        for(i=0,temp;i<2*n;i=i+2,temp=temp->next->next)
            {
                 data1=temp->val;
                 temp->val=temp->next->val;
                 temp->next->val=data1;
           }  
            return head;
    }
 
}