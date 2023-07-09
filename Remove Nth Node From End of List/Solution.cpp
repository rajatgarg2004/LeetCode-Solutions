/*Runtime
7 ms
Beats
36.24%
Memory
10.7 MB
Beats
11.32%*/

 int len1(ListNode *n1)
 {
     int n=0;
        while(n1!=NULL)
        {
            n++;
            n1=n1->next;
        }
        return n;
 }
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    int len = len1(head) - n + 1;
    ListNode* prev = NULL;
    ListNode* temp = head;
    for (int i = 1; i < len; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL) {
        head = head->next;
        return head;
    }
    else {
        prev->next = prev->next->next;
        return head;
    }

    }
};
