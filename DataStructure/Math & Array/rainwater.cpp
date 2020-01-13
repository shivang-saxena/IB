/* Rain Water Trapped
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining. 
Input Format
The only argument given is integer array A.
Output Format
Return the total water it is able to trap after raining..
For Example
Input 1:
    A = [0,1,0,2,1,0,1,3,2,1,2,1]
Output 1:
    6
Explaination 1:
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
int Solution::trap(const vector<int> &A) {
    int n=A.size();
    vector<int> left(n); 
    vector<int> right(n);
    int rainwater=0;
    

        left[0]=A[0];
        for(int j=1;j<n;j++)
        left[j]=max(left[j-1],A[j]);
        
        right[n-1]=A[n-1];
        for(int j=n-2;j>=0;j--)
        right[j]=max(right[j+1],A[j]);
        
    
    for(int i=0;i<n;i++){
     rainwater += min(left[i],right[i])-A[i];
    }
    return rainwater;
}
int main(){
    //inputs
    return 0;
}
};