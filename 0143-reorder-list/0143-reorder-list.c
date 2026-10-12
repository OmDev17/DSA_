/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    if(head==NULL || head->next==NULL){
        return ;
    }
    struct ListNode* slow=head;
    struct ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode* p1=slow->next;
    slow->next=NULL;
    struct ListNode* prev=NULL;
    struct ListNode* nextnode=slow->next;
    while(p1!=NULL){
        nextnode=p1->next;
        p1->next=prev;
        prev=p1;
        p1=nextnode;
    }

    while(head!=NULL&&prev!=NULL){
        struct ListNode* ptr1=head;
        struct ListNode* ptr2=prev;
        head=head->next;
        prev=prev->next;
        ptr1->next=ptr2;
        ptr2->next=head;
    }

}