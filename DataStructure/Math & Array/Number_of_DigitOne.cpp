/*
Number of Digit One
Given an integer A, find and return the total number of digit 1 appearing in all non-negative integers less than or equal to A. 
Input Format
The only argument given is the integer A.
Output Format
Return the total number of digit 1 appearing in all non-negative integers less than or equal to A.
Constraints
0 <= A <= 10^9
For Example
Input 1:
    A = 10
Output 1:
    2

Input 2:
    A = 20
Output 2:
    12

*/
#include<bits/stdc++.h>
using namespace std;

class Solution{

int Solution::solve(int A) {
    int c=0;
    for(int i=1;i<=A;i *=10){
        // string str = to_string(i);
        // c += count(str.begin(),str.end(),'1');
        int d=i*10;
        c += (A / d) * i +  
               min(max(A % d - i + 1, 0), i); 
    }
    return c;
}
    int main(){
         //input-output code
    return 0;
    }
};