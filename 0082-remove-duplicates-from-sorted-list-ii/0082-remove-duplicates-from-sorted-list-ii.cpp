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

        ListNode* prev = NULL ;
        ListNode* temp1 = head ;
        ListNode* temp2 = temp1->next ; 

        while(temp2 != NULL){
            if(temp1->val != temp2->val){
                prev = temp1 ;
                temp1 = temp2 ;
                temp2 = temp2->next ;   
            }
            else{
                while(temp2 != NULL && temp1->val == temp2->val){
                    temp2 = temp2->next ;
                }

                if(prev == NULL){
                    head = temp2 ;
                }
                else{
                    prev->next = temp2 ;
                }
                temp1 = temp2 ;

                if(temp2 != NULL){
                    temp2 = temp2->next ;
                } 
            }
        }
        return head ;
    }
};