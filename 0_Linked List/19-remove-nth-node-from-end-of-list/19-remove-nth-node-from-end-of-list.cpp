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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL) return NULL;
        
        
        ListNode* temp = new ListNode();
        temp->next = head;
        ListNode* fast = temp;
        ListNode* slow = temp;
        for(int i=0; i<n; i++) fast= fast->next;
        while(fast->next !=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        if(slow->next == head) return head->next;
        
        slow->next = slow->next->next;
        
        
    
        return head;
        
        
        
    }
};