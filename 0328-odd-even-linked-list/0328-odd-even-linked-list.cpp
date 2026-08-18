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
    ListNode* oddEvenList(ListNode* head) { 

        if(head == NULL){
            return head ;
        }

        ListNode* temp = head ;
        vector<int> ans ;

        while(temp != NULL){
            ans.push_back(temp->val) ;

            if( temp-> next == NULL){
                break ;
            }
            temp = temp->next->next ;
        }

        temp = head ; 
        temp = head->next ; // temp -. also works for temp

        while(temp != NULL){
            ans.push_back(temp->val) ; 

            if(temp->next == NULL){
                break ;
            }
            temp = temp->next->next ;
        }

        ListNode* newNode = new ListNode(ans[0]) ; 
        ListNode* curr = newNode ;

        for(int i=1 ; i<ans.size() ; i++){
            ListNode* mover = new ListNode(ans[i]);
            curr->next  = mover ;
            curr = mover ; 
        }
        return newNode ;
    }
};