/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *p = head;
    struct ListNode *q = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *m = (struct ListNode *)malloc(sizeof(struct ListNode));
    int count = 0;
    q->next = head;
    m = q;
    p = head;
    while(p){
        p = p->next;
        count ++;
    }
    n = count - n ;
    while(n--)  q = q->next;
    p = q->next;
    q->next = p->next;
    return m->next;
}