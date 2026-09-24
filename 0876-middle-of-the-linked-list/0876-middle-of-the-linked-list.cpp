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
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode* temp = head;

        while(temp != NULL) {
        n++;
        temp = temp->next;
        }

        int middle_index = n / 2;

        temp = head;

        for(int i = 0; i < middle_index; i++) {
        temp = temp->next;
        }

        return temp;
    }
};