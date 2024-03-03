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
    void remove(ListNode* head ,int &n)
    {
      if (!head)
            return;

        remove(head->next,n);
        n--;
        if (n == -1){
            ListNode* temp = head->next;
            head->next = head->next->next;
            delete temp;
        }
    
    }
    ListNode* removeNthFromEnd(ListNode* head, int  n) {
      
   if(!head or !head->next)
            return NULL;
   ListNode* dummy = new ListNode();
        dummy->next = head; 
       remove(dummy,n);
       return dummy->next;
    }
};