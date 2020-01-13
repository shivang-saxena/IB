/*
Xor queries
You are given an array (containing only 0 and 1) as element of N length. Given L and R, you need to determine value of XOR of all elements from L to R (both inclusive) and number of unset bits (0's) in the given range of the array. Input
First argument contains the array of size N containing 0 and 1 only (1<=N<=100000). 

Second argument contains a 2D array with Q rows and 2 columns, each row represent a query with 2 columns representing L and R. 

(1<=Q<=100000), (1<=L<=R<=N).
Output
Return an 2D array of Q rows and 2 columns i.e the xor value and number of unset bits in that range respectively for each query.
Examples Input
1 0 0 0 1
2 4
1 5 
3 5
Output
0 3
0 3
1 2
Explanation Testcase 1-
In the given case the bit sequence is of length 5 and the sequence is 1 0 0 0 1. For query 1 the range is (2,4), and the answer is (array[2] xor array[3] xor array[4]) = 0, and number of zeroes are 3, so output is 0 3. Similarly for other queries.


We know x^x=0 and x^0=x where '^' is the symbol for xor operation.

You should store the cumulative xor value for index i in array A i.e. A[i] will have the xor value of all    the elements from 1 to i (boundary included).

You should also store the total number of ones or zeroes scanned till now, in another array say B i.e. B[i] will tell the total number of ones/zeroes from 1 to i(both inclusive).

Therefore now, xor value from L to R is A[R]^A[L-1] because, A[R] has xor values of elements from 1 to R      which includes xor of 1 to L-1 and L-1 to R.

Therefore, if we take xor of A[L-1] with A[R] then, we will nullify the affect of all elements from 1 to L-1, resulting in the output of xor values from L to R.

For total number of ones/zeroes.you simply do B[R]-B[L-1].
*/

/*
 Solution Approach
We know x^x=0 and x^0=x where '^' is the symbol for xor operation.

You should store the cumulative xor value for index i in array A i.e. A[i] will have the xor value of all    the elements from 1 to i (boundary included).

You should also store the total number of ones or zeroes scanned till now, in another array say B i.e. B[i] will tell the total number of ones/zeroes from 1 to i(both inclusive).

Therefore now, xor value from L to R is A[R]^A[L-1] because, A[R] has xor values of elements from 1 to R      which includes xor of 1 to L-1 and L-1 to R.

Therefore, if we take xor of A[L-1] with A[R] then, we will nullify the affect of all elements from 1 to L-1, resulting in the output of xor values from L to R.

For total number of ones/zeroes.you simply do B[R]-B[L-1].
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    vector<vector<int> > Solution::solve(vector<int> &A, vector<vector<int> > &B) {
   int psum[A.size()+1];
   // Prefix sum array to get number of ones in a range
        psum[0] = 0;
        for(int i = 1; i <= A.size(); i++)
        {
         psum[i]=A[i-1]; 
         psum[i] += psum[i-1];
        }
   
   vector<vector<int> > res;
   for(int i=0;i<B.size();i++)
        {   vector <int> v;
            int l, r, _xor = 0, ones;
            l=B[i][0];
            r=B[i][1];
            ones = psum[r] - psum[l-1];  
            
            if(ones&1)
             {
              _xor = 1;           
             }
            
            v.push_back(_xor);
            v.push_back(r-l+1-ones);
            res.push_back(v);
    }
    // int n=B.size();
    // vector<vector<int> > res;
    // for(int i=0;i<n;i++){
    //     int count=0,xr=A[B[i][0]-1];
    //     if(A[B[i][0]-1] ^ 1) count++;
    //     vector<int> v;
    //     for(int j=(B[i][0]);j<(B[i][1]);j++){
    //         xr ^= A[j];
    //         if(A[j] ^ 1) count++;
    //     }
    //   v.push_back(xr);v.push_back(count);
    //   res.push_back(v);
    // }
    return res;
}


    int main(){
         //input-output code
    return 0;
    }
};