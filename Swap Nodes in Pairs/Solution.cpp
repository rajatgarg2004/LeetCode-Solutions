/*Runtime
3 ms
Beats
53.18%
Memory
7.5 MB
Beats
73.83%
*/

 int length(ListNode *head)
 {
     int counter=0;
     while(head!=NULL)
     {
         counter++;
         head=head->next;
     }
     return counter;
 }
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(length(head)==1 || length(head)==0)
        {
            return head;
        }
        // vector<ListNode*> v1;
        // ListNode* temp= head;
        // while(temp!=NULL)
        // {
        //     v1.push_back(temp);
        //     temp=temp->next;
        // }
        // for(int i=0;i<v1.size()-1;i+=2)
        // {
        //     swap(v1[i],v1[i+1]);
        // }
        // ListNode *temp1=v1[0];
        // temp=temp1;
        // for(int i=1;i<v1.size();i++)
        // {
        //     temp->next=v1[i];
        //     temp=temp->next;
        // }
        // temp->next=NULL;
        // temp=temp1;
        // return temp;
        ListNode* temp=head->next;
        head->next=swapPairs(head->next->next);
        temp->next=head;
        return temp;
    

    }
};
