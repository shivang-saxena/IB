/*
Partition List
Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x. You should preserve the original
relative order of the nodes in each of the two partitions. For example, Given 1->4->3->2->5->2 and x = 3, return 1->2->2->4->3->5.
*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
   int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
class Solution{
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* temp=A;
    vector<int> vec1;
    vector<int> vec2;
    while(temp != NULL){
        if(temp->val < B){
            vec1.push_back(temp->val);
        }else{
            vec2.push_back(temp->val);
        }
        temp=temp->next;
    }
    vec1.insert(vec1.end(), vec2.begin(), vec2.end());
    // for(auto x: vec1) cout<<x<<" ";
    // cout<<endl;
    temp=A;
    for(int i=0;i<vec1.size();i++){
        temp->val=vec1[i];
        temp=temp->next;
    }
    
    return A;
}
    int main(){
         //input-output code
    return 0;
    }
};