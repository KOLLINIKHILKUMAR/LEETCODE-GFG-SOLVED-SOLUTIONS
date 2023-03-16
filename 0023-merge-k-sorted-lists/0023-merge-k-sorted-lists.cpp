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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        priority_queue<int>pq;
        for(auto i : lists)
        {
            while(i)
            {
                pq.push(i->val);
                i=i->next;
            }
        }
        ListNode* temp = NULL;
        while(!pq.empty()){
            ListNode* node = new ListNode(pq.top());
            if(temp) {node->next = temp; temp = node;}
            else{ temp = node;}
            pq.pop();
        }
        return temp;
        return NULL;
    }
};