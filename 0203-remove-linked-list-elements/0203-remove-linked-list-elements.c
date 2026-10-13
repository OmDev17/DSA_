/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head != NULL && head->val == val){
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }
    if(head==NULL){
        return NULL;
    }
    else{
        struct ListNode* ptr1=head;
        struct ListNode* ptr2=head->next;
        while(ptr2!=NULL){
            if(ptr2->val==val){
                ptr1->next=ptr2->next;
                ptr2=ptr1->next;
            }
            else{
            ptr2=ptr2->next;
            ptr1=ptr1->next;
            }
        }
        return head;
    }
}