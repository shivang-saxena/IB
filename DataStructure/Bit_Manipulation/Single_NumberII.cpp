/*
Single Number II
Given an array of integers, every element appears thrice except for one which occurs once. Find that element which does not appear thrice. Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? Input Format:
    First and only argument of input contains an integer array A
Output Format:
    return a single integer.
Constraints:
2 <= N <= 5 000 000  
0 <= A[i] <= INT_MAX
For Examples :
Example Input 1:
    A = [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Example Output 1:
    4
Explanation:
    4 occur exactly once
Example Input 2:
    A = [0, 0, 0, 1]
Example Output 2:
    1
*/

/*
Solution Approach
Having noticed that if X has 1 in that position, we will have 3x+1 number of 1s in that position. If X has 0 in that position, we will have 3x+1 number of 0 in that position. A straightforward implementation is to use an array of size 32 to keep track of the total count of ith bit. We can improve this based on the previous solution using three bitmask variables: ones as a bitmask to represent the ith bit had appeared once.
twos as a bitmask to represent the ith bit had appeared twice.
threes as a bitmask to represent the ith bit had appeared three times.
When the ith bit had appeared for the third time, clear the ith bit of both ones and twos to 0. The final answer will be the value of ones.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::singleNumber(const vector<int> &A) {
    int n=A.size(),r=0;
    int bit_count[32]={0};
    
    for(int i=0;i<32;i++){
        for(int x=0;x<n;x++){
            if((A[x] >> i) & 1) bit_count[i]++;
        }
        r |= ((bit_count[i]%3) << i);
    }
    return r;
}


    int main(){
         //input-output code
    return 0;
    }
};