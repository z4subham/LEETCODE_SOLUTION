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
    ListNode* sortList(ListNode* head) { 

        if(head == NULL || head->next == NULL){
            return head ;
        }

        ListNode* temp = head ;
        
        //store the ele into set bcz it stores ele in sorted order :- 
        multiset<int> st ;

        while(temp != NULL){
            st.insert(temp->val) ;
            temp = temp->next ;
        }
 
        temp = head ;
        for(auto it = st.begin() ; it != st.end() ; it++){
            temp->val = *(it) ; 
            temp = temp->next ;
        }

        return head ;
    }
};