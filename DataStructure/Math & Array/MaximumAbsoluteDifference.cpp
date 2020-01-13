/*
Maximum Absolute Difference
You are given an array of N integers, A1, A2 ,..., AN. Return maximum value of f(i, j) for all 1 ≤ i, j ≤ N. f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x. For example,
A=[1, 3, -1]

f(1, 1) = f(2, 2) = f(3, 3) = 0
f(1, 2) = f(2, 1) = |1 - 3| + |1 - 2| = 3
f(1, 3) = f(3, 1) = |1 - (-1)| + |1 - 3| = 4
f(2, 3) = f(3, 2) = |3 - (-1)| + |2 - 3| = 5

So, we return 5.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
int Solution::maxArr(vector<int> &A) {
    int maxA=INT_MIN, minA=INT_MAX;
    int maxB=INT_MIN, minB=INT_MAX;
    
    for(int i=0;i<A.size();i++){
        maxA = max(maxA,A[i]+i);
        minA = min(minA,A[i]+i);
        maxB = max(maxB,A[i]-i);
        minB = min(minB,A[i]-i);
    }
    return max(maxA-minA,maxB-minB);
}
    int main(){
        //input-output code
    return 0;
    }
};