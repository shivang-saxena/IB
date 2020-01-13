/*
Single Number
Given an array of integers, every element appears twice except for one. Find that single one. Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? Input Format:
    First and only argument of input contains an integer array A
Output Format:
    return a single integer denoting single element
Constraints:
2 <= N <= 2 000 000  
0 <= A[i] <= INT_MAX
For Examples :
Example Input 1:
    A = [1, 2, 2, 3, 1]
Example Output 1:
    3
Explanation:
    3 occurs only once
Example Input 2:
    A = [1, 2, 2]
Example Output 2:
    1
*/
/* Solution Approach
We have noticed that if X has 1 in that position, we will have odd number of 1s in that position. If X has 0 in that position, we will have odd number of 0 in that position. If you look at the bit operators, XOR is exactly what we need. XOR will return 1 only on two different bits. So if two numbers are the same, XOR will return 0. Finally, there is only one number left. A ^ A = 0 and A ^ B ^ A = B. So, all even occurences will cancel out using XOR.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
int Solution::singleNumber(const vector<int> &A) {
    int ans=0;
    for(int i=0;i<A.size();i++){
        ans^=A[i];
    }
    return ans;
}

    int main(){
         //input-output code
    return 0;
    }
};