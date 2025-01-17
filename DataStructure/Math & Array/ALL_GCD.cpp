/*
ALL GCD
Given an array of integers A of size N. Find and return how many distinct gcd( sub(A) ) values are possible, where sub(A) is any non-empty subsequence of arraya A. NOTE: gcd here refers to greatest common divisor. 
Input Format
The first argument given is the integer array A.
Output Format
Return how many distinct gcd( sub(A) ) values are possible, where sub(A) is any subsequence of array A.
Constraints
1 <= N <= 1000
1 <= A[i] <= 1000
For Example
Input 1:
    A = [3, 2, 8]

Output 1:
    4
Explaination 1:
gcd([3]) = 3
gcd([3, 2]) = 1
gcd([3, 8]) = 1
gcd([2]) = 2
gcd([2, 8]) = 2
gcd([8]) = 8
gcd([3, 2, 8]) = 1
There are 4 distinct gcd values (1,2, 3, 8).

Input 2:
    A = [5, 17, 3, 11]
Output 2:
    5
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::solve(vector<int> &A) {
    set<int>ust;
    ust.insert(A[0]);
 for(int i=1;i<A.size();i++)
 {
     ust.insert(A[i]);
     for(auto it =ust.begin();it!=ust.end();it++)
     {
         int hf=__gcd(A[i],*it);
         ust.insert(hf);
     }
 }
 return (int) ust.size();
}

    int main(){
         //input-output code
    return 0;
    }
};