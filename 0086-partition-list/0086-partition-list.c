struct ListNode* partition(struct ListNode* head,int x){
    if(head==NULL||head->next==NULL){
        return head;
    }
    struct ListNode *p1,*p2,*temp;
    struct ListNode *part1=malloc(sizeof(struct ListNode));
    struct ListNode *part2=malloc(sizeof(struct ListNode));
    part1->next=NULL;
    part2->next=NULL;
    p1=part1;
    p2=part2;
    temp=head;
    while(temp!=NULL){
        struct ListNode *next=temp->next;
        temp->next=NULL;
        if(temp->val<x){
            part1->next=temp;
            part1=temp;
        }
        else{
            part2->next=temp;
            part2=temp;
        }
        temp=next;
    }
    part1->next=p2->next;
    temp=p1->next;
    free(p1);
    free(p2);
    return temp;
}