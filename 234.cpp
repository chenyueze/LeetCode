/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    if(head == NULL) return true;
    struct ListNode *p = head;
    int cnt = 0, flag = 0;
    while(p){
        p = p->next;
        cnt ++;
    }
    p = head;
    if(cnt == 1) return true;
    if(cnt % 2 != 0) flag = 1;
    cnt /= 2;
    int data[cnt];
    for(int i = cnt - 1; i >= 0; i--){
        data[i] = p->val;
        p = p->next;
    }
    if(flag == 1) p = p->next;
    for(int i = 0; p != NULL; i++){
        if(p->val != data[i]) return false;
        p = p->next;
    }
    return true;
}
