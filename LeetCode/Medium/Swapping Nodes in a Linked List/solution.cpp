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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        int a = k - 1;
        int b = n - k;

        int x = arr[a];
        arr[a] = arr[b];
        arr[b] = x;
        temp = head;
        for(int i = 0; i < n; i++) {
            temp->val = arr[i];
            temp = temp->next;
        }

        return head;
    }
};