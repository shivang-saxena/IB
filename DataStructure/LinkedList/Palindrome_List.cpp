/*
Palindrome List
Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively. Notes:
Expected solution is linear in time and constant in space.
For example,
List 1-->2-->1 is a palindrome.
List 1-->2-->3 is not a palindrome.
*/

/*
Solution Approach
To check palindrome, we just have to reverse latter half of linked list and then we can in (n/2) steps total can compare if all 
elements are same or not.
For finding mid point, first we can in O(N) traverse whole list and calculate total number of elements.
Reversing is again O(N).
*/
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
   int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
class Solution{
void reverse(ListNode** head){
    ListNode* prev=NULL;
    ListNode* current=*head;
    ListNode* next=NULL;
    while(current != NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
 }
int compareLists(struct ListNode* head1, struct ListNode *head2)
{
    struct ListNode* temp1 = head1;
    struct ListNode* temp2 = head2;

    while (temp1 && temp2)
    {
        if (temp1->val == temp2->val)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else return 0;
    }

    /* Both are empty reurn 1*/
    if (temp1 == NULL && temp2 == NULL)
        return 1;

    /* Will reach here when one is NULL
       and other is not */
    return 0;
}

int Solution::lPalin(ListNode* first_head) {
    //find the mid of LL and
    ListNode* slow_ptr=first_head;
    ListNode* fast_ptr=first_head;
    ListNode* prev_slow_ptr=NULL;
    ListNode* mid=NULL;
    ListNode* second_head=NULL;
    int res=1;
    if(first_head != NULL && first_head->next != NULL){
        while(fast_ptr && fast_ptr->next){
            fast_ptr= fast_ptr->next->next;
            prev_slow_ptr=slow_ptr;
            slow_ptr=slow_ptr->next;
        }
        
        //if fast_ptr is NULL then LL is even otherwise is odd
        if(fast_ptr != NULL){
            mid=slow_ptr;
            slow_ptr=slow_ptr->next;
        }
        
        //remove the link of first half
        second_head=slow_ptr;
        prev_slow_ptr->next=NULL;
        
        reverse(&second_head);
        res=compareLists(first_head,second_head);
    }
    return res;
}
    int main(){
         //input-output code
    return 0;
    }
};