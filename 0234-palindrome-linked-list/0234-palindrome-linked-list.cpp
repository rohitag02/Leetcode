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
ListNode* reverseLinkedList(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr != NULL){
        ListNode* front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    return prev;
}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    ListNode* slow= head;
    ListNode* fast= head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* first=head;
    ListNode* newHead= reverseLinkedList(slow);
    ListNode* second=newHead;
    while(second != NULL){
    if(first->val != second->val){
        reverseLinkedList(newHead);
        return false;
    }
    second = second->next;
    first = first->next;
    }
    reverseLinkedList(newHead);
    return true;  
    }
};    
 