/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if (A==NULL)
        return B;
    if (B==NULL)
        return A;
        ListNode* a=A;
        ListNode* b=B;
        ListNode* c2=new ListNode(0);
        ListNode* c=c2;
    while(a!=NULL&&b!=NULL)
    {
        if(a->val<b->val)
        {
            c->next=a;
            c=c->next;
            a=a->next;
        }
        else
        {
            c->next=b;
            c=c->next;
            b=b->next;
        }
    }
    while(a!=NULL)
    {
        c->next=a;
        c=c->next;
        a=a->next;
    }
    while(b!=NULL)
    {
        c->next=b;
        c=c->next;
        b=b->next;
    }
    return c2->next;

}
