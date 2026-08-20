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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size() ;

        multiset<int> st ;
        for(int i=0 ; i<n ; i++){
            ListNode* temp = lists[i] ;

            while(temp != NULL){
                st.insert(temp->val) ;
                temp = temp->next ;
            }
        }
        ListNode* dummy = new ListNode(-1) ;
        ListNode* temp_1 = dummy ;

        //iterate in multiset and push all the element into new LL :- 

        for(auto it = st.begin() ; it != st.end() ; it++){
            temp_1->next = new ListNode(*it) ;
            temp_1 = temp_1->next ;
        }
        return dummy->next ;
    }
};