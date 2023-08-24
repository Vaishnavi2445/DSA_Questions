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
    int getDecimalValue(ListNode* head) {
        int count=0;
         int ans=0;
        ListNode *temp=head;
        while(temp->next!=nullptr){
            count++;
            temp=temp->next;
        }

         int n=count;
        while(head!=nullptr){
            ans = ans + head->val*pow(2,n);
            n--;
            head=head->next;
        }
        return ans;
    }
};
