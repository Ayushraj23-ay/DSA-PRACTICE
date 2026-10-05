class Solution {
public:
    ListNode* detectCycle(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        
        while (fast != nullptr && fast->next != nullptr) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                break;
            }
        }

        
        if (fast == nullptr || fast->next == nullptr) {
            return nullptr;
        }

        
        ListNode* n1 = head;
        ListNode* n2 = slow;

        while (n1 != n2) {
            n1 = n1->next;
            n2 = n2->next;
        }

        return n1;
    }
};