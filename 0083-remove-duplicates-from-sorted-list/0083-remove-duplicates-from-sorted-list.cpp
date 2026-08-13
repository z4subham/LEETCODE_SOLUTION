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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head ;
        }

        ListNode* temp1 = head ;
        ListNode* temp2 = temp1->next ; 

        while(temp2 != NULL){
            if(temp1-> val != temp2->val){
                temp2 = temp2->next ;
                temp1 = temp1->next ;
            }
            else{

                //link is created between the two nodes :- 
                temp1->next = temp2->next ; 
                
                //->move one of them 1 step ahead
                temp2 = temp2->next ;
                
            }
        }
        return head ;
    }
};