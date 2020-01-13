/*
Interesting Array
You have an array A[] with N elements. We have 2 types of operation available on this array :
We can split a element B into 2 elements C and D such that B = C + D.
We can merge 2 elements P and Q as one element R such that R = P^Q i.e XOR of P and Q.
You have to determine whether it is possible to make array A[] containing only 1 element 0 after several splits and/or merge? Input
The first argument is an array of size N containing integer values Ai. 
(1<=N<=100000) 
(1<=Ai<=10^6) 
Output
Return "Yes" if it is possible otherwise return "No".
Examples Input
9 17
Output
Yes
Explanation Testcase 1-
Following is one possible sequence of operations -  
1) Merge i.e 9 XOR 17 = 24  
2) Split 24 into two parts each of size 12  
3) Merge i.e 12 XOR 12 = 0  
As there is only 1 element i.e 0. So it is possible.
*/


/*
 Solution Approach
If any element in array is even then it can be made 0. Split that element in two equal parts of  Ai/2 and Ai/2. XOR of two equal numbers is zero. Therefore this strategy makes an element 0.

If  any element is odd. Split it in two part: 1, Ai-1. Since Ai-1 is even, it can be made 0 by above strategy. Therefore an odd element can reduce its size to 1.

Two odd elements can therefore be made 0 by following above strategy and finally XOR them (i.e. 1) as 1 XOR 1 = 0.

Therefore if number of odd elements in array is even, then answer is possible. Otherwise an element of value 1 will be left and it is not possible to satisfy the condition.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    string Solution::solve(vector<int> &A) {
    int odd=0;
        for(auto temp:A){
            if(temp%2==1){
                odd++;
            }
        }
        if(odd%2==0){
            return "Yes";
        }
        int first=-1;
        for(auto temp:A){
            if(first==-1 && temp%2==1){
                first=temp;
            }
            else if(temp%2 == 1){
                if(first!=temp){
                    return "No";
                }
            }
        }
        return "Yes";
}


    int main(){
         //input-output code
    return 0;
    }
};