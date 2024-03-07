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
    ListNode* middleNode(ListNode* head) {
    ListNode* pt1=head;
    ListNode* pt2=head;
    while(pt1!=nullptr && pt1->next!=nullptr)
    {
        pt1=pt1->next->next;
        pt2=pt2->next;
    }
    return pt2;     
    }
};