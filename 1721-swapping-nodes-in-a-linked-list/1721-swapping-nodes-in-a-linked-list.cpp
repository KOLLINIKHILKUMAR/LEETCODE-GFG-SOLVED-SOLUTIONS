/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode * temp=head, *ba;
        int c=0,l=0,val1;
        for(temp=head;temp!=NULL;temp=temp->next)
        {
            if(c==k-1)
                ba=temp;
            c++;
            l++;
        }
        c=1;
        for(temp=head;l-c!=k-1;temp=temp->next)
        {
            c++;
        }
        val1=ba->val;
        ba->val=temp->val;
        temp->val=val1;
        return head;
    }
};