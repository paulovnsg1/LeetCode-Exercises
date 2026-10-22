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
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = nullptr;
        ListNode* current = head;
        while (current != nullptr) {
            ListNode* next = current->next; // guarda o próximo
            current->next = previous;       // inverte a seta
            previous = current;             // avança prev
            current = next;                 // avança curr
        }
        return previous;                    // prev é o novo head
    }
};