/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    if(head == NULL) return head;
    struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *q = (struct ListNode *)malloc(sizeof(struct ListNode));
    p->next = head;
    q = p;
    while(p->next){
        if(p->next->val == val) {
            p->next = p->next->next;
        }else{
            p = p->next;
        }
        if(p == NULL) break;
    }
    return q->next;
}