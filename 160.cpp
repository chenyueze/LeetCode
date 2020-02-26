/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;
    int la, lb, lgap;
    for (la = 0; p; p = p->next, la++);  //链表A长度
    for (lb = 0; q; q = q->next, lb++);  //链表B长度
    lgap = la - lb;  //计算长度差
    if (la > lb){
        while (lgap--)  headA = headA->next;  //如果A更长，让A先走gap距离
    } else {
        while (lgap++)  headB = headB->next;  //反之让B先走gap距离
    }
    while (headA){  //逐一对比节点
        if (headA == headB) return headA;
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}