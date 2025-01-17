/*
Search in a row wise and column wise sorted matrix
Given a matrix of integers A of size N x M and an integer B. In the given matrix every row and column is sorted in increasing order. Find and return the position of B in the matrix in the given form:
If A[i][j] = B then return (i * 1009 + j)
And if B is not present return -1 instead. Note: Rows are numbered from top to bottom and columns are numbered from left to right. 
Input Format
The first argument given is the integer matrix A.
The second argument given is the integer B.
Output Format
Return the position of B and if it is not present in A return -1 instead.
Constraints
1 <= N, M <= 1000
-100000 <= A[i] <= 100000
-100000 <= B <= 100000
For Example
Input 1:
    A = [   [1, 2, 3]
            [4, 5, 6]
            [7, 8, 9]   ]
    B = 2
Output 1:
    1011    (= 1 * 1009 + 2)

Input 2:
    A = [   [1, 3, 5, 7]
            [2, 4, 6, 8]    ]
    B = 10
Output 2:
    -1
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
int Solution::solve(vector<vector<int> > &A, int B) {
    int n=A.size(),m=A[0].size();
    // cout<<n;
    int i=0,j=m-1;
    if( n == 0) return -1;
    int s=A[0][0],l=A[n-1][m-1];
    // cout<<s<<l;
    if(B < s || B > l) return -1;
    while(i<n && j>=0){
        if(A[i][j] == B){ 
            // cout<<i<<" "<<j;
            int x= ((i+1)*1009);
            return x+(j+1);
            
        }
        if(A[i][j] > B) j--;
        else i++;
    }
    // cout<<n<<m;
    return -1;
}
    int main(){
         //input-output code
    return 0;
    }
};