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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *t1 = list1;
        ListNode *t2 = list2;
        ListNode* dnode= new ListNode(-1);

        ListNode* temp =dnode;

        while(t1!=nullptr && t2!=nullptr){
            if(t1->val<t2->val){
                temp->next = t1;
                temp = t1;
                t1 = t1->next;
            }
            else{
                temp->next = t2;
                temp = t2;
                t2 = t2->next;
            }
        }
        if(t1!=nullptr){
            temp->next=t1;
        }
        else{
            temp->next=t2;
        }
        return dnode->next;
    }
};




// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* merge(ListNode* list1, ListNode* list2) {

//         if(list1->next == NULL){
//             list1->next = list2;
//             return list1;
//         }
        
//         ListNode* prev = list1;
//         ListNode* curr = prev->next;
//         ListNode* temp = list2;

//         while (curr != nullptr && temp != nullptr) {

//             if ((prev->val <= temp->val) && (curr->val >= temp->val)) {
//                 prev->next = temp;
//                 temp->next = curr;

//                 temp = temp->next;
//                 prev = prev->next;
//             }

//             else {

//                 prev = curr;
//                 curr = curr->next;

//                 if (curr == NULL) {
//                     curr->next = temp;
//                     return list1;
//                 }
//             }
//         }
//         return list1;
//     }

//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

//         if (list1 == NULL) {
//             return list2;
//         }

//         if (list2 == NULL) {
//             return list1;
//         }

//         if (list1->val <= list2->val) {
//             return merge(list1, list2);
//         }

//         else {
//             return merge(list2, list1);
//         }
       
//     }
// };


// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode() : val(0), next(nullptr) {}
// //  *     ListNode(int x) : val(x), next(nullptr) {}
// //  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

// //         ListNode* temp1=new ListNode(0);
// //         ListNode* ans=temp1;

// //         while(list1!=nullptr && list2!=nullptr){
// //             if(list1->val > list2->val){
// //                 ans->next=list2;
// //                 list2=list2->next;
// //             }
// //             else{
// //                 ans->next=list1;
// //                 list1=list1->next;
// //             } 
// //             ans=ans->next;
// //         }

// //         // for rest of Node
// //         if(list1!=nullptr){
// //             ans->next=list1;
// //         }
// //         else{
// //             ans->next=list2;
// //         }

// //         return temp1->next;
// //     }
// // };
