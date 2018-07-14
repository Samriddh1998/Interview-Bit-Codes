/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
int Solution::lPalin(ListNode* A) {
    int ar[100000];
    if(A==NULL||A->next==NULL) return 1;
    ListNode *tempA=A;
    int n=0;
    while(A!=NULL)
    {
        ar[n++]=A->val;
        A=A->next;
    }
    A=tempA;
    
    while(A!=NULL)
    {
        int ele=ar[--n];
        if(A->val!=ele) return 0; 
        A=A->next;
    }
    return 1;
}
