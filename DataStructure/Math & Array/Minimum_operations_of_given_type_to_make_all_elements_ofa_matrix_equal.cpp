/*
Minimum operations of given type to make all elements of a matrix equal
Given a matrix of integers A of size N x M and an integer B. In a single operation, B can be added to or subtracted from any element of the matrix. Find and return the minimum number of operations required to make all the elements of the matrix equal and if it impossible return -1 instead. Note: Rows are numbered from top to bottom and columns are numbered from left to right. 
Input Format
The first argument given is the integer matrix A.
The second argument given is the integer B.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::solve(vector<vector<int> > &matrix, int k) {
    int  n = matrix.size(), m = matrix[0].size();
    vector<int> arr(n * m, 0);
    
    long long y = (INT_MAX/k)*k;
    
    int mod = (y+matrix[0][0]) % k; 
  
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < m; ++j) { 
            arr[i * m + j] = matrix[i][j];
            if ((y+matrix[i][j]) % k != mod) { 

                return -1; 

            } 
        } 
    } 
  
    sort(arr.begin(), arr.end()); 
  
    int median = arr[(n * m) / 2]; 
  
    int minOperations = 0; 
    for (int i = 0; i < n * m; ++i)  
        minOperations += abs(arr[i] - median) / k; 
  
    if ((n * m) % 2 == 0) 
    { 
       int median2 = arr[(n * m) / 2]; 
       int minOperations2 = 0; 
       for (int i = 0; i < n * m; ++i)  
          minOperations2 += abs(arr[i] - median2) / k; 
  
       minOperations = min(minOperations, minOperations2); 
    } 
  
    return minOperations; 
    
}
    int main(){
         //input-output code
    return 0;
    }
};