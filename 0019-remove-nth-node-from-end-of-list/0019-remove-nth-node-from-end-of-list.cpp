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
private:
    int find_len(ListNode* head){
        int ctr_ = 0 ;
        ListNode* temp = head ;

        while(temp != NULL){
            ctr_++ ;
            temp = temp->next ;
        }
        return ctr_ ; //->size of LL 
    }    
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL){
            return head ;
        }

        int size = find_len(head) ; 
        //exact node which i have to be deleted :- 
        int k = size - n + 1 ;
        
        if(k == 1){
            //code for deletion of head :- 
            ListNode* temp = head ;
            head = head->next ;
            delete temp ;

            return head ;
        }
        ListNode* temp = head ;
        ListNode* prev = NULL ;
        int ctr = 0 ;

        while(temp != NULL){
            ctr++ ;

            if(ctr == k){
                prev->next = prev->next->next ;
                delete temp ;
                break ;
            }
            prev = temp ; //->update the prev 
            temp = temp->next ;
        }
        return head ;
    }
};