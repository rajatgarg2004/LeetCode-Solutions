/*Runtime
8 ms
Beats
71.39%
Memory
14.9 MB
Beats
20.79%*/


//Constraints
/*
The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/


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
