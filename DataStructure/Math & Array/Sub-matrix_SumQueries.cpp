/*
Sub-matrix Sum Queries
Given a matrix of integers A of size N x M and multiple queries Q, for each query find and return the submatrix sum. Inputs to queries are top left (b, c) and bottom right (d, e) indexes of submatrix whose sum is to find out. Note: Rows are numbered from top to bottom and columns are numbered from left to right. Sum may be large so return the answer mod 10^9 + 7. 
Input Format
The first argument given is the integer matrix A.
The second argument given is the integer array B.
The third argument given is the integer array C.
The fourth argument given is the integer array D.
The fifth argument given is the integer array E.
(B[i], C[i]) represents the top left corner of the i'th query.
(D[i], E[i]) represents the bottom right corner of the i'th query.
Output Format
Return the submatrix sum (% 10^9 + 7) for each query in the form of an integer array.
Constraints
1 <= N, M <= 1000
-100000 <= A[i] <= 100000
1 <= Q <= 100000
1 <= B[i] <= D[i] <= N
1 <= C[i] <= E[i] <= M
For Example
Input 1:
    A = [   [1, 2, 3]
            [4, 5, 6]
            [7, 8, 9]   ]
    B = [1, 2]
    C = [1, 2]
    D = [2, 3]
    E = [2, 3]
Output 1:
    [12, 28]

Input 2:
    A = [   [5, 17, 100, 11]
            [0, 0,  2,   8]    ]
    B = [1, 1]
    C = [1, 4]
    D = [2, 2]
    E = [2, 4]
Output 2:
    [22, 19]

*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    #define M 1000000007
vector<int> Solution::solve(vector<vector<int> > &A, vector<int> &B, vector<int> &C, vector<int> &D, vector<int> &E) {
    vector<int>res;
    int n = A.size();
    int m = A[0].size();
    int q;
    
    for(int i = 0; i<n; i++){
        for(int j = 1; j<m; j++){
            A[i][j] = (A[i][j]%M + A[i][j-1]%M)%M;
        }
    }
    
    for(int i = 0; i<m; i++){
        for(int j = 1; j<n; j++){
            A[j][i] = (A[j][i]%M + A[j-1][i]%M)%M;
        }
    }
    for(int i = 0; i<B.size(); i++){
        
    
        if(B[i]==1 && C[i]==1)
        q = (A[D[i]-1][E[i]-1])%M;
        
        
        else if(B[i]==1 && C[i]!=1)
        q = (A[D[i]-1][E[i]-1] - A[D[i]-1][C[i]-2])%M;
        
        
        else if(C[i]==1 && B[i]!=1)
        q = (A[D[i]-1][E[i]-1] - A[B[i]-2][E[i]-1])%M;
        
        
        else if(B[i]-2>=0 && C[i]-2>=0)
        q = (A[D[i]-1][E[i]-1] - A[B[i]-2][E[i]-1] - A[D[i]-1][C[i]-2] + A[B[i]-2][C[i]-2])%M;
        
    
        if(q<0){
            q = (q+M)%M;
        }
        res.push_back(q);
    }
    return res;
}



    int main(){
         //input-output code
    return 0;
    }
};