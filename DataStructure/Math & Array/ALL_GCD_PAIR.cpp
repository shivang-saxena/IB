/*
ALL GCD PAIR
Given an array of integers A of size N containing GCD of every possible pair of elements of another array. Find and return the original numbers which are used to calculate the GCD array in any order. For example, if original numbers are {2, 8, 10} then the given array will be {2, 2, 2, 2, 8, 2, 2, 2, 10}. 
Input Format
The first and only argument given is the integer array A.
Output Format
Find and return the original numbers which are used to calculate the GCD array in any order.    
Constraints
1 <= N <= 10000
0 <= A[i] <= 100000
For Example
Input 1:
    A = [2, 2, 2, 2, 8, 2, 2, 2, 10]

Output 1:
    [2, 8, 10]

Input 2:
    A = [5 5 5 15 ]
Output 2:
    [5, 15]
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    n=sqrt(n);
    vector<int> vec;
    for(int i=0;i<(n*n);i+=(n+1))
    {
        vec.push_back(A[i]);
    }
    return vec;
}


    int main(){
         //input-output code
    return 0;
    }
};