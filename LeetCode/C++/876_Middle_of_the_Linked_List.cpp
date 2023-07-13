// Given the head of a singly linked list, return the middle node of the linked list.
//     If there are two middle nodes,
//     return the second middle node.

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
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {

        // Floyd's Cycle finding algorithm

        ListNode *hare = head;    // Fast ptr
        ListNode *tortise = head; // Slow ptr
        std::cout << sizeof(hare);
        while (hare && hare->next)
        {
            hare = hare->next->next;
            tortise = tortise->next;
        }

        return tortise;

        // Time complexity: O(n), as the loop is traversed once.
        // Auxiliary Space: O(1), only two pointers of size 8 bytes
        //  are used therefore constant space complexity.
    }
};