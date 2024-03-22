class Solution {
public:
    bool palindrome(ListNode* &l, ListNode* r, bool &p) {
        if (r == nullptr)
            return true;
        
        if (!p) // If p is already false, no need to continue recursion
            return false;

        p = palindrome(l, r->next, p);
        
        if (l->val == r->val) {
            l = l->next; // Move l pointer forward
            return true && p;
        } else {
            p = false; // Update p to false if values don't match
            return false;
        }
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) // Empty list or single node, considered palindrome
            return true;
        
        ListNode* l = head;
        ListNode* r = head;
        bool p = true;
        
        return palindrome(l, r, p);
    }
};
