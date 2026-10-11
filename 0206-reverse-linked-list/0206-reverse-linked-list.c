/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev=NULL;
    struct ListNode* nextnode=head;
    struct ListNode* ptr=head;
    while(nextnode!=NULL){
        nextnode=nextnode->next;
        ptr->next=prev;
        prev=ptr;
        ptr=nextnode;
    }
    
    return prev;
}