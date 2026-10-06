/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *p1=head;
    int hash[201]={0};
    while(p1!=NULL){
        hash[p1->val+100]++;
        p1=p1->next;
    } 
    p1=head;
    struct ListNode *p2 = (struct ListNode *) malloc(sizeof(struct ListNode));
    p2->next=NULL;
    head=p2;
    while(p1!=NULL){
        if(hash[p1->val+100]==1){
        struct ListNode *newnode = (struct ListNode *) malloc(sizeof(struct ListNode));
        newnode->val=p1->val;
        newnode->next=NULL;
        p2->next=newnode;
        p2=newnode;
        p1=p1->next;
        }
        else{
            p1=p1->next;
        }
    }
    return head->next;
}