/*
Max Non Negative SubArray
Given an array of integers, A of length N, find out the maximum sum sub-array of non negative numbers from A. The sub-array should be contiguous i.e., a sub-array created by choosing the second and fourth element and skipping the third element is invalid. Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Find and return the required subarray. NOTE:
    1. If there is a tie, then compare with segment's length and return segment which has maximum length.
    2. If there is still a tie, then return the segment with minimum starting index.

 Input Format:
The first and the only argument of input contains an integer array A, of length N.
Output Format:
Return an array of integers, that is a subarray of A that satisfies the given conditions.
Constraints:
1 <= N <= 1e5
1 <= A[i] <= 1e5
Examples:
Input 1:
    A = [1, 2, 5, -7, 2, 3]

Output 1:
    [1, 2, 5]

Explanation 1:
    The two sub-arrays are [1, 2, 5] [2, 3].
    The answer is [1, 2, 5] as its sum is larger than [2, 3].

Input 2:
    A = [10, -1, 2, 3, -4, 100]

Output 2:
    [100]

Explanation 2:
    The three sub-arrays are [10], [2, 3], [100].
    The answer is [100] as its sum is larger than the other two.

*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    vector<int> Solution::maxset(vector<int> &A) {
 int n= A.size();
 int x=0,maxe=0,c=0,start=0,end=-1;
 int mstart=-1,mend=-1;
 long long int sum=0, maxsum=0;
 vector<int> maxarr;
 
 while(x < n){
     if(A[x] >= 0){
         sum += A[x];c++;end++;
     }
     if(sum > maxsum){
         maxsum = sum;
         mstart = start;
         mend = end;
     }
     else if(sum == maxsum && c>maxe){
         maxe=c;
         mstart = start;
         mend= end;
     }
     if(A[x] < 0){
         c=0;
         start = x+1;end=x;
         sum=0;
     }
     x++;
 }
 if(mstart != -1 && mend != -1){
     for(int i=mstart;i<=mend;i++) maxarr.push_back(A[i]);
 }
 return maxarr;
}

    int main(){
         //input-output code
    return 0;
    }
};