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
        if(head == NULL){
            return 0 ;
        }
        ListNode* temp = head ;
 
        int ctr = 0 ;
        while(temp != NULL){
            ctr++ ;
            temp = temp->next ;
        }
        return ctr ;
    }    
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head ;

        int n = find_len(head) ;
        int middle_node = n/2 + 1 ;

        temp = head ;
        while(temp != NULL){
            middle_node-- ;

            if(middle_node == 0){
                break ;
            }
            temp = temp->next ;

        }
        return temp ;
    }
};