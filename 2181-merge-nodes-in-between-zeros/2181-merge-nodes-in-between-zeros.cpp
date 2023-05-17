/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* mergeNodes(ListNode *head)
        {
            ListNode *temp, *prevaddr=head;
            bool f = false;
            int sum = 0;
            for (temp = head; temp != NULL; temp = temp->next)
            {
                if (temp->val == 0)
                {
                    if (!f)
                    {
                        if (sum != 0)
                        {
                            ListNode *new_node = new ListNode();
                            new_node->val = sum;
                            new_node->next = NULL;
                            prevaddr->next = new_node;
                            prevaddr = new_node;
                            sum = 0;
                            f = false;
                        }
                    }
                    else
                    {
                        f = true;
                    }
                }
                else
                {

                    sum = sum + temp->val;
                }
            }
            return head->next;
        }
};