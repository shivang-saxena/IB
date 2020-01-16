/*
K reverse linked list
Given a singly linked list and an integer K, reverses the nodes of the list K at a time and returns modified linked list.
 NOTE : The length of the list is divisible by K 
Example : Given linked list 1 -> 2 -> 3 -> 4 -> 5 -> 6 and K=2, You should return 2 -> 1 -> 4 -> 3 -> 6 -> 5 
Try to solve the problem using constant extra space.
*/

/*
Solution Approach
Split the list into buckets of length K and then reverse each of them. After this you have to concatenate the buckets and return the list.
 To split the list into buckets of length K, use 2 pointers that are K elements afar. To reverse a linked list check this.
 */

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
   int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
class Solution{
ListNode* reverse(ListNode* head,int k){
  ListNode* current=head;
  ListNode* prev=NULL;
  ListNode* next=NULL;
  int c=0;
  
  while(current != NULL && c<k){
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
      c++;
  }
  
  if(next != NULL)
  head->next=reverse(next,k);
  
  return prev;
}
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(B == 1) return A;
  A=reverse(A,B);
  return A;
}

    int main(){
         //input-output code
    return 0;
    }
};