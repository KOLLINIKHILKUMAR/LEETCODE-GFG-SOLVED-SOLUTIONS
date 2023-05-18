/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int numComponents(ListNode *head, vector<int> &nums)
        {
            map<int, bool> m;
            
            for (auto i: nums) m[i] = false;
            
            ListNode *temp = head;
            
            // if (m.find(head->val)!=m.end())
            // {
            //     m[head->val] = true;
            //     if(m.size()==1) return 1;
            // }
            
            int prev =-1, pf = 0, count = 0;

            for (temp = head; temp != NULL; temp = temp->next)
            {
                if(prev==-1)
                {
                    prev=temp->val;
                }
                if (m.find(temp->val) != m.end())
                {
                    
                    if (m.find(prev) != m.end() && m[prev] == true)
                    {
                        // cout<<prev<<" in "<<temp->val<<endl;
                        m[temp->val] = true;
                        pf = 1;
                    }
                    else if(m.find(temp->val) != m.end())
                    {
                        // cout<<prev<<" out "<<temp->val<<endl;
                        m[temp->val]=true;
                        pf=1;
                    }
                }
                else if (pf == 1)
                {
                    count++;
                    pf = 0;
                }
                prev = temp->val;
            }
            if (pf == 1) count++;
            // cout<<"map"<<endl;
            // for(auto k : m) cout<<k.first<<" "<<k.second<<endl;
            return count;
        }
};