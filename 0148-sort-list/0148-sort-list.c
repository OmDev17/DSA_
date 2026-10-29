/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* merge(struct ListNode* left, struct ListNode* right) {
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode* temp = &dummy;
    while (left != NULL && right != NULL) {
        if (left->val <= right->val) {
            temp->next = left;
            left = left->next;
        }
        else {
            temp->next = right;
           right = right->next;
        }
        temp = temp->next;
    }
    if (left != NULL) {
        temp->next = left;
    }
    else {
        temp->next = right;
    }
    return dummy.next;
}
struct ListNode* sortList(struct ListNode* head) {
    if(head==NULL||head->next==NULL){
        return head;
    }
    struct ListNode* fast=head->next;
    struct ListNode* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    struct ListNode* second=slow->next;
    slow->next=NULL;
    struct ListNode* left= sortList(head);
    struct ListNode* right= sortList(second);
    return merge(left,right);
}