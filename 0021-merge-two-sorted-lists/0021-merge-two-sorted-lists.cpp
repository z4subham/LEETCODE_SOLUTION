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

        if(list1 == NULL && list2 == NULL){
            return NULL ;
        }

        ListNode* temp1 = list1 ; 
        ListNode* temp2 = list2 ; 

        multiset<int> st ;

        while(temp1 != NULL){
            st.insert(temp1->val) ;
            temp1 = temp1->next ;
        }

        while(temp2 != NULL){
            st.insert(temp2->val) ;
            temp2 = temp2->next ;
        }
        //create an empty LL and put all the values into it :- 
        
        ListNode* dummy = new ListNode(-1) ;
        ListNode* temp = dummy ;
        for(auto it = st.begin() ; it != st.end() ; it++){
            temp->next = new ListNode(*it) ; 

            //mover the temp
            temp = temp->next ;
        } 
        return dummy->next ;  
    }
};