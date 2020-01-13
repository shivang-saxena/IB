/*
Count of paths in a grid
Given an integer A, find and return the number of paths in a grid of size (A x A) that starts from (1, 1) and reaches (A, A) without crossing the major diagonal. Since the result can be large, return the result modulo (10^9 + 7). NOTE
The major diagonal of a matrix A is the collection of entries A[i][j] where i == j

Input Format
The only argument given is integer A.
Output Format
Return the number of paths modulo (10^9 + 7).
Constraints
1 <= A <= 10^6
For Example
Input 1:
    A = 2
Output 1:
    1

Input 2:
    A = 5
Output 2:
    14
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
#define ll long long
ll power(ll x,ll y,ll mod){
    ll res = 1; 
    while(y){
        if(y&1) res = (res*x)%mod; 
        y>>=1; 
        x = (x*x)%mod;
    }
    return res;
}
int Solution::solve(int A) {
    A--;
    long long num = 1,deno=1,mod = 1e9+7; 
    for(ll i=A+1;i<=2*A;i++){
        num = (num*i)%mod;
    }
    for(ll i=1;i<=A+1;i++){
        deno = (deno*i)%mod;
    }
    return (num*power(deno,mod-2,mod))%mod;
}
    int main(){
         //input-output code
    return 0;
    }
};