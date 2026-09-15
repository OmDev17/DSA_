/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy;
    struct ListNode* last;
    int r=0;
    dummy=l1;
    while(l1!=NULL && l2!=NULL){
        int sum=(l1->val+l2->val)+r;
        l1->val=sum%10;
        r=sum/10;
        last=l1;
        l1=l1->next;
        l2=l2->next;
    }
    if(l1!=NULL){
        while(l1!=NULL){
            int sum=(l1->val+0)+r;
            l1->val=sum%10;
            r=sum/10;
            last=l1;
            l1=l1->next;
        }
    }
    if(l2!=NULL){
        last->next=l2;
        l1=l2;
        while(l1!=NULL){
            int sum=(l1->val+0)+r;
            l1->val=sum%10;
            r=sum/10;
            last=l1;
            l1=l1->next;
        }
    }
    if (r > 0) {
            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
            newNode->val = r;
            newNode->next = NULL;
            last->next = newNode; 
        }
        return dummy;
}