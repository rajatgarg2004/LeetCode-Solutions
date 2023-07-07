/*Runtime
42 ms
Beats
46.34%
Memory
70.9 MB
Beats
96.49%*/

int size(ListNode *n1)
{
    int counter=0;
    while(n1!=NULL)
    {
        counter++;
        n1=n1->next;
    }
    return counter;
}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=l1;
        ListNode* temp1=l2;
        int carrie=0;
        int diff=size(temp)-size(temp1);
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        if(diff<0)
        {
            while(diff!=0)
            {
                ListNode *n1=new ListNode(0);
                temp->next= n1;
                temp=temp->next;
                diff++;
            }
        }
        else if(diff>0)
        {
            while(diff!=0)
            {
                ListNode *n1=new ListNode(0);
                temp1->next=n1;
                temp1=temp1->next;
                diff--;
            }
        }
        temp=l1;
        temp1=l2;
        while(temp1!=NULL || temp!=NULL)
        {
                if(temp->val+temp1->val+carrie<10)
                {
                    temp1->val=temp1->val+temp->val+carrie;
                    carrie=0;
                }
                else
                {
                    temp1->val=(temp1->val+temp->val+carrie)%10;
                    carrie=1;
                }
                if(temp->next!=NULL)
                {temp=temp->next;
                temp1=temp1->next;}
                else
                {
                    break;
                }
        }
        if(carrie==1)
        {
            ListNode *n1=new ListNode(1);
            temp1->next=n1;
        }
        temp1=l2;
        return temp1;
        
    }
};
