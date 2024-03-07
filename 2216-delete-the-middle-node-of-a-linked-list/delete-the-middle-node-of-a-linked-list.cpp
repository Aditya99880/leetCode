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
    ListNode* deleteMiddle(ListNode* head) {
        ios_base::sync_with_stdio(false);
     if (head->next ==nullptr || head ==nullptr) return nullptr; 
     ListNode* pt1=head;
    ListNode* pt2=head,*prev;
    while(pt1!=nullptr && pt1->next!=nullptr)
    {
        pt1=pt1->next->next;
        prev=pt2;
        pt2=pt2->next;
        
    }
    prev->next=prev->next->next;
    delete pt2;
    return head;

    }
};