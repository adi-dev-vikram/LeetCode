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
        int n = 0, k = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            k++;
            temp = temp->next;
        }
        temp = head;
        k = k-1;
        while(temp != NULL){
            n = n+(temp->val)*pow(2,k);
            temp = temp->next;
            k--;
        }
        return n;
    }
};