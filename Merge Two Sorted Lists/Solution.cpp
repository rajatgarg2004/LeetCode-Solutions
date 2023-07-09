/*Runtime
8 ms
Beats
71.39%
Memory
14.9 MB
Beats
20.79%*/

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
        {
			return list2;
        }
		if(list2 == NULL)
        {
			return list1;
		} 
		if(list1 -> val <= list2 -> val)
        {
			list1 -> next = mergeTwoLists(list1 -> next, list2);
			return list1;
		}
		else
        {
			list2 -> next = mergeTwoLists(list1, list2 -> next);
			return list2;            
		}
    }
