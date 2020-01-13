/*
Compute nCr % m
Given three integers A, B and C, where A represents n, B represents r and C represents m, find and return the value of nCr % m where nCr % m = (n! / ((n-r)! * r!)) % m. x! means factorial of x i.e. x! = 1 * 2 * 3... * x. 
Input Format
The first argument given is integer A ( = n).
The second argument given is integer B ( = r).
The third argument given is integer C ( = m).
Output Format
Return the value of nCr % m.
Constraints
1 <= A*B <= 10^6
1 <= B <= A
1 <= C <= 10^6
For Example
Input 1:
    A = 5
    B = 2
    C = 13
Output 1:
    10

Input 2:
    A = 6
    B = 2
    C = 13
Output 2:
    2
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::solve(int A, int B, int C) {
    int arr[B+1];
    memset(arr, 0, sizeof(arr)); 
    arr[0] = 1; 
    for (int i = 1; i <= A; i++) 
    { 
        for (int j = min(i, B); j > 0; j--) 
            arr[j] = (arr[j] + arr[j-1])%C; 
    } 
    return arr[B]; 
}

    int main(){
         //input-output code
    return 0;
    }
};