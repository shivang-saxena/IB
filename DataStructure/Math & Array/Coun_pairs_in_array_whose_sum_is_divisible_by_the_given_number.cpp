/*
Count pairs in array whose sum is divisible by the given number
Given an array of integers A and an integer B, find and return the number of pairs in A whoes sum is divisible by B. Since the answer may be large, return the answer modulo (10^9 + 7). 
Input Format
The first argument given is the integer array A.
The second argument given is the integer B.
Output Format
Return the total number of pairs for which the sum is divisible by B modulo (10^9 + 7).
Constraints
1 <= length of the array <= 100000
1 <= A[i] <= 10^9 
1 <= B <= 10^6
For Example
Input 1:
    A = [1, 2, 3, 4, 5]
    B = 2
Output 1:
    4

Input 2:
    A = [5, 17, 100, 11]
    B = 28
Output 2:
    1
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{

    int mod = 1000000007;

int Solution::solve(vector<int> &a, int k) 
{
   long long int n = a.size();
   long long int m[k];
   for(int i=0; i<k; i++)
       m[i]=0;
    for(int i = 0; i < n; i++){
        m[a[i]%k]++;
    }
    long long int sum=0;
    sum+=(m[0]*(m[0]-1))/2;
     for(int i=1; i<=k/2 && i!=k-i; i++){
         sum+=m[i]*m[k-i];
     }
    if(k%2==0)
        sum+=(m[k/2]*(m[k/2]-1))/2;
    return (sum)%mod;
}

    int main(){
         //input-output code
    return 0;
    }
};