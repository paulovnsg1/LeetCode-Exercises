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
        unordered_set<ListNode*> vistos;
        ListNode* atual = head; // ponteiro chamado atual que aponta para head

        while (atual != nullptr){
            if (vistos.count(atual)) return true;

            vistos.insert(atual);
            atual = atual->next;
        }

        return false;
    }
};