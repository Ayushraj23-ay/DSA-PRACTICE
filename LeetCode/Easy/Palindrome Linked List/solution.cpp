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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!= NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp = NULL;
        while(slow!=NULL){
            ListNode* temp1 = slow->next;
            slow->next=temp;
            temp=slow;
            slow=temp1;
        }
        ListNode* first = head;
        ListNode* second = temp;
        while(second!=NULL){
            if(first->val  != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};