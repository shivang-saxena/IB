/*
Remove Nth Node from List End
Given a linked list, remove the nth node from the end of list and return its head. For example, Given linked list: 1->2->3->4->5, and n = 2. After removing the second node from the end, the linked list becomes 1->2->3->5.
 Note:
If n is greater than the size of the list, remove the first node of the list.
Try doing it using constant additional space.
*/

/*
Solution Approach
Obviously, since we do not have back pointers, reaching the end node and then making our way back is not an option. There are 2 approaches :
1) Find out the length of the list in one go. Then you know the number of node to be removed. Traverse to the node and remove it.
2) Make the first pointer go n nodes. Then move the second and first pointer simultaneously. This way, the first pointer is always 
ahead of the second pointer by n nodes. So when first pointer reaches the end, you are on the node to be removed.
*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
   int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution{

    ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int n=0;
    ListNode* current=A;
    while(current != NULL){
        n++;
        current=current->next;
    }
    current=A;
    if(n==1 && B==1){
        A=NULL;
    }
    else if(B>=n){
        return A->next;
    }
    else{
        int k=n-B;int i=1;
        while(current != NULL){
            
            if(k == i){
                // cout<<current->val;
                if(i == n-1)
               current->next=NULL;
               else
                current->next=current->next->next;
                break;
            }
            current=current->next;
            i++;
        }
    }
    // cout<<n<<"" <<n-B;
    return A;
}

    int main(){
         //input-output code
    return 0;
    }
};