// Leet Code - Reverse Linked List Solution in C++
// https://leetcode.com/problems/reverse-linked-list/
// Linear Solution

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
    ListNode *reverseList(ListNode *head) { 
        ListNode *prev = NULL; 
        ListNode *node = head; 

        while(node != NULL) { 
            ListNode *aux = node->next;
            node->next = prev; 
            prev = node;
            node = aux;
        }
        
        return prev;
    }
};