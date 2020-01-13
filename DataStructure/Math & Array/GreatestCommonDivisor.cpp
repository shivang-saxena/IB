/*
Greatest Common Divisor
Given 2 non negative integers m and n, find gcd(m, n) GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n. Both m and n fit in a 32 bit signed integer. Example
m : 6
n : 9

GCD(m, n) : 3 
 NOTE : DO NOT USE LIBRARY FUNCTIONS 
 */
#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::gcd(int A, int B) {
    if(A == 0) return B;
    if(B == 0) return A;
    if(A%B == 0) return B;
    if(B%A == 0) return A;
    if(A<B) return gcd(A,B%A);
    return gcd(B,A%B);
}


    int main(){
         //input-output code
    return 0;
    }
};