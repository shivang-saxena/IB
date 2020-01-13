/*
Rectangle Area
Given eight integers A, B, C, D, E, F, G and H which represent two rectangles in a 2D plane. For the first rectangle it's bottom left corner is (A, B) and top right corner is (C, D) and for the second rectangle it's bottom left corner is (E, F) and top right corner is (G, H). Find and return the overlapping area of the two rectangles. 
Input Format
The eight arguments given are the integers A, B, C, D, E, F, G and H.
Output Format
Return the overlapping area of the two rectangles.
Constraints
-10000 <= A <= C <= 10000
-10000 <= B <= D <= 10000
-10000 <= E <= G <= 10000
-10000 <= F <= H <= 10000
For Example
Input 1:
    A = 0   B = 0
    C = 4   D = 4
    E = 2   F = 2
    G = 6   H = 6
Output 1:
    4

Input 2:
    A = 0   B = 0
    C = 4   D = 4
    E = 2   F = 2
    G = 3   H = 3
Output 2:
    1
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::solve(int A, int B, int C, int D, int E, int F, int G, int H) {
    if(A > G || C< E || D < F || B > H ) return 0;
    
    int l,r,u,d;
    l=max(A,E);
    r=min(C,G);
    u=min(D,H);
    d=max(B,F);
    int a= (r-l)*(u-d);
    return a;
}


    int main(){
         //input-output code
    return 0;
    }
};