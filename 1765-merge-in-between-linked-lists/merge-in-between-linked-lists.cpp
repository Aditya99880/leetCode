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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* left,*right,*temp=list1;
        int i=0;
        for(i=0;i<=b;i++){
            if(i+1==a) left =temp;
            else if(i==b) right=temp;
            temp=temp->next; 
            
        }
        left->next=list2;
        temp=list2;
        while(temp->next!=nullptr)
        {
             temp=temp->next; 
        }
        temp->next=right->next;
        return list1;
        
    }
};