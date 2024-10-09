// https://leetcode.com/problems/linked-list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        map<ListNode*, bool>visited;
        ListNode* temp = head;
        while(temp != NULL){
            // cycle is present
            if(visited[temp] == true){
                return 1;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        return false;
    }
};