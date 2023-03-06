class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        stack<int> s1,s2;
        int carry=0,first,second;
        ListNode * pt1=l1, *pt2=l2, *head=NULL;
        while(pt1!=NULL)
        {
            s1.push(pt1->val);
            pt1=pt1->next;
        }
        while(pt2!=NULL)
        {
            s2.push(pt2->val);
            pt2=pt2->next;
        }
        while (!s1.empty() || !s2.empty() || carry) 
        {
            if (!s1.empty()) {
                first = s1.top();
                s1.pop();
            }
            else
                first = 0;
            
            if (!s2.empty()) {
                second = s2.top();
                s2.pop();
            }
            else
                second = 0;
            
            int temp = first+second+carry;
            
            ListNode* node = new ListNode(temp%10);
            
            node->next = head;
            head = node;
            carry = temp/10;
            
        }
        return head;
    }
    
};