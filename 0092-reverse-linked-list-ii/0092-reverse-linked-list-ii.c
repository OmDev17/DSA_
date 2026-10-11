/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode* prev=NULL;
    struct ListNode* rightptr=head;
    struct ListNode* leftptr=head;
    for(int i=1;i<=right;i++){
        if(i<left){
            prev=leftptr;
            leftptr=leftptr->next;
        }
        rightptr=rightptr->next;
    }
    
    struct ListNode* nextnode=leftptr;
    struct ListNode* start=leftptr;
    struct ListNode* prevNode=NULL;
    int k=0;
    while(k!=right-left+1){
        nextnode=nextnode->next;
        leftptr->next=prevNode;
        prevNode=leftptr;
        leftptr=nextnode;
        k++;
    }
    if(prev!=NULL){
        prev->next=prevNode;
    }
    else{
        head=prevNode;
    }
    start->next=rightptr;
    return head;
}