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
        
        
        unordered_map<ListNode*,bool> visited;

        while(head != nullptr){

            if(!visited.contains(head)){
                visited[head] = true;
                head = head->next;
            }
            else{
                return true;
            }
        }
        return false;

    }
};