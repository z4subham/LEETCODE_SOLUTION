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
    int getDecimalValue(ListNode* head) {
        string num = "";

        ListNode* temp = head;
        while(temp != NULL) {
            num += char(temp->val + '0');
            temp = temp->next;
        }

        // now num contains binary number, convert it into decimal

        long long power = 0;
        long long ans = 0;

        for(int i = num.length() - 1; i >= 0; i--) {
            int last_dig = num[i] - '0';

            ans = ans + last_dig * pow(2, power);
            power++;
        }

        return ans;
    }
};