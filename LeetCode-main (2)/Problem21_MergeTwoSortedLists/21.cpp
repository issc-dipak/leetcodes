/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
            if (!list1)    //if list1 is empty 
                return list2;  //return list2
            
            if(!list2)
                return list1;
    
            ListNode *head = NULL;
            //decide head of the new list
            if(list1->val >= list2->val){  
                head = list2;
                list2 = list2->next;
            }else{
                head = list1;
                list1 = list1->next;
            }
    
            //iterate through reaming list's compare and merge them
            ListNode *curr = head;
            while(list1 && list2)
            {
                if(list1->val >= list2->val)
                  {  curr->next = list2;
                    list2 = list2->next;}
                else
                  {  curr->next = list1;
                    list1 = list1->next;}
                curr = curr->next;
            }
    
            //add the reamining list
            if(!list1)
                curr->next = list2;
            else
                curr->next = list1;
    
            return head;
            
        }
    };