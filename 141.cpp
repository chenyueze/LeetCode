/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head == NULL) return false;
    struct ListNode *p, *q;
    p = head, q = head;
    while(p->next && q->next){
        if(p->next == q->next->next) return true;
        p = p->next , q = q->next->next;
        if(p == NULL || q == NULL) break;
    }
    return false;
}