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
    void reorderList(ListNode* head) {
        ListNode* t1 = head;
        vector<ListNode*>v;
        
        while(t1!=nullptr){
         v.push_back(t1);
         t1 = t1->next;
        }

        int i = 0;
        int j = v.size()-1;
        
        t1 = v[i];
        t1->next = v[j];
        t1 = t1->next;
        i++;

        while(j>i){
            t1->next = v[i];
            t1 = t1->next;
            j--;

            t1->next=v[j];
            t1=t1->next;
            i++;
            
        }
        t1->next=NULL;
        
    }
};

Approach
First we took all the addresses of the nodes in a vector
Then we took the two pointers one at starting of v vector(i) and another at the end(j)
Then we update the head with the starting pointer(i) and the after that attached the last pointer to the head(j)
Then we increment the i
We don't decrement the j value at the same time because we want the starting node ie i+1 and then j
Then we took a temp variable to traverse
Then in a while loop we continue to update the temp and accordingly incremented and decremented the value of i and j
