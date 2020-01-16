/*
Reverse Link List II
Reverse a linked list from position m to n. Do it in-place and in one-pass. For example: Given 1->2->3->4->5->NULL, m = 2 and n = 4, return 1->4->3->2->5->NULL.
 Note: Given m, n satisfy the following condition: 1 ≤ m ≤ n ≤ length of list. Note 2: Usually the version often seen in the interviews is reversing the whole 
 linked list which is obviously an easier version of this question. 
 */

 /*
 Solution Approach
If you are still stuck at reversing the full linked list problem,
then would maintaining curNode, nextNode and a tmpNode help ? Maybe at every step, you do something like this :
    tmp = nextNode->next;
            nextNode->next = cur;
            cur = nextNode;
            nextNode = tmp;
Now, lets say you did solve the problem of reversing the linked list and are stuck at applying it to current problem.
What if your function reverses the linked list and returns the endNode of the list.
You can simply do
prevNodeOfFirstNode->next = everseLinkedList(curNode, n - m + 1);
*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
   int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
class Solution{
ListNode* Solution::reverseBetween(ListNode* head, int m, int n) {
 ListNode* newHead = new ListNode(-1);
	        newHead->next = head;
	        ListNode* prev = newHead;
	        for(auto i = 0 ; i < m-1 ; i++){
	            prev = prev->next;
	        }
	        ListNode* const reversedPrev = prev;
	        prev = prev->next;
	        ListNode* cur = prev->next;
	        for(auto i = m ; i < n ; i++){
	            prev->next = cur->next;
	            cur->next = reversedPrev->next;
	            reversedPrev->next = cur;
	            cur = prev->next;
	        }
	        return newHead->next;
    
}
    int main(){
         //input-output code
    return 0;
    }
};