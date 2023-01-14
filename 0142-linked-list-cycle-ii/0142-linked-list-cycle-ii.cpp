/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode * temp=head;
        map<const ListNode*,int> m;
        for(temp=head;m.find(temp)==m.end();temp)
        {
            m[temp]++;
            if(temp==NULL) return NULL;
            temp=temp->next;
            
        }
        return temp;
    }
};