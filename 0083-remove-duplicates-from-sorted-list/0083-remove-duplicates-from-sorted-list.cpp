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
    ListNode* deleteDuplicates(ListNode* head) {
       
        ListNode* current=head;
        while(current!=nullptr)
        {
            ListNode* prev=current;
            ListNode* runner=current->next;
            while(runner!=nullptr)
            {
                if(runner->val==current->val)
                {
                    prev->next=runner->next;
                    ListNode*temp=runner;
                    runner=runner->next;
                    delete temp;
                }
                else{
                    prev=runner;
                    runner=runner->next;
                }
            }
            current=current->next;
        }
        return head;
    }
};