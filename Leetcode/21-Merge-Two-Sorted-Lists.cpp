/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
*/
#include <array>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Using Recursion
// First version -encapsulated into a function
class Solution1 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         return mergeListPosition(list1, list2);
    }

    ListNode* mergeListPosition(ListNode* list1, ListNode* list2) {
      if(list1 == nullptr && list2 == nullptr) {
        return nullptr;
      } else if(list1 == nullptr) {
        return list2;
      } else if(list2 == nullptr) {
        return list1;
      } else if(list1->val < list2->val) {
        list1->next = mergeListPosition(list1->next, list2);
        return list1;
      } else {
        list2->next = mergeListPosition(list1, list2->next);
        return list2;
      }
    }
};

// Second version - functions cause increased time
class Solution2 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if(list1 == nullptr && list2 == nullptr) {
        return nullptr;
      } 
      if(list1 == nullptr) {
        return list2;
      } 
      if(list2 == nullptr) {
        return list1;
      } 
      if(list1->val < list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
      } else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
      }
    }     
};
