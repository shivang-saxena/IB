/*
Middle element of linked list
Given a linked list of integers. Find and return the middle element of the linked list. Note: If there are N nodes in the linked list and N is even then return the (N/2+1)th element. 
Input Format
The only argument given head pointer of linked list.
Output Format
Return the middle element of the linked list.
Constraints
1 <= length of the linked list <= 100000
1 <= Node value <= 10^9 
For Example
Input 1:
    1->2->3->4->5
Output 1:
   3 

Input 2:
    A = 1->5->6->2->3->4
Output 2:
    2
*/
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
   int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
class Solution{
int Solution::solve(ListNode* A) {
   ListNode* slowptr=A;
   ListNode* fastptr=A;
   
   while(fastptr != NULL && fastptr->next != NULL){
       slowptr=slowptr->next;
       fastptr=fastptr->next->next;
   }
   return slowptr->val;
}
    int main(){
         //input-output code
    return 0;
    }
};