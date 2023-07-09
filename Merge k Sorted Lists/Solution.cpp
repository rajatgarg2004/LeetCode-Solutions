/*Runtime
25 ms
Beats
76.85%
Memory
14 MB
Beats
19.34%*/

ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v1;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i]!=NULL)
            {
                v1.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        if(v1.size()==0)
        {
            return NULL;
        }
        sort(v1.begin(),v1.end());
        ListNode *temp= new ListNode(v1[0]);
        ListNode *temp1= temp;
        for(int i=1;i<v1.size();i++)
        {
            ListNode *temp2=new ListNode(v1[i]);
            temp->next=temp2;
            temp=temp->next;
        }
        temp=temp1;
        return temp;
    }
