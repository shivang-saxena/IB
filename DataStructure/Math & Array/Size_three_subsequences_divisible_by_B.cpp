/*
Size three subsequences divisible by B
Given an array of integers A and an integer B. Find and return the number of subsequences of length 3 whose sum is divisible by B. Since the total number of subsequences may be very large. Return the total number of subsequences of length 3 whose sum is divisible by B modulo (109+7). 
Input Format
The only argument given is the integer array A.
Output Format
Return the number of subsequences of length 3 whose sum is divisible by B modulo (10^9+7). 
Constraints
1 <= length of the array <= 100000
1 <= A[i] <= 10^9 
1 <= B <= 10^3
For Example
Input 1:
    A = [6, 1, 1, 4, 1, 5, 3]
    B = 2
Output 1:
    20

Input 2:
    A = [4, 10, 9]
    B = 5
Output 2:
    0
*/

/*
Three cases may occur: 1.Thrice of a number is divisible by B then we will add ncr(N,3) to answer where N is frequency of that number. 2.Twice of some number A added with sum number B is divisible by B
then we will add ncr(Freq[A],2) * Freq[B] to the answer. 3.If all the number A, B, C(A,B,C are pairwise disticnt)
that sum up to S which is divisible by B then we will add Freq[A] * Freq[B] * Freq[C] to the answer. Time Complexity : O(B^2) 
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    const long long mod= 1000000007;
int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    assert(n>=1&&n<=100000);
    assert(B>=1&&B<=1000);

    long long count=0;
    long long H[B]; memset(H,0,sizeof(H));
    for(int i=0;i<n;i++){
        assert(A[i]>=1 && A[i] <=1000000000);
        A[i] = A[i] % B;
        H[A[i]]++;
    }
    
    for(int i=0;i<B;i++){
        for(int j=i;j<B;j++){
            int rem = (B - (i + j) % B) % B; 
            if(rem < j) continue;
            if(i==j && rem==j){
             long long x=1LL*(H[i]*(H[i]-1)*(H[i]-2))/6;
             x%=mod;
             count=(count+x)%mod;
          }

         else if (i==j){
            long long x=(1LL*H[i]*(H[i]-1)*H[rem])/2;
            x%=mod;
            count=(count+x)%mod;
          }
         else if (i==rem){
            long long x=(1LL*H[i]*(H[i]-1)*H[j])/2;
            x%=mod;
            count=(count+x)%mod;
          }
        else if (j==rem){
            long long x=(1LL*H[j]*(H[j]-1)*H[i])/2;
            x%=mod;
            count=(count+x)%mod;
          }
       else{
           long long x=(1LL*H[j]*H[i]*H[rem]);
           x%=mod;
           count=(count+x)%mod;
          }
        }
    }
    
    int ans= (int)count;
    return ans;
}

    int main(){
         //input-output code
    return 0;
    }
};