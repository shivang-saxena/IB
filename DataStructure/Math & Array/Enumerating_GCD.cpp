/*
Enumerating GCD
You are given a number P and a number Q. Greatest Common Divisor (GCD) of all numbers between P and Q inclusive is taken (GCD(P, P+1, P+2 ... Q)). As this problem looks a bit easy, it is given that numbers P and Q can be in the range of 10100. You have to return the value of GCD found. Greatest common divisor of 2 numbers A and B is the largest number D that divides both A and B perfectly. Input:
P: String
Q: String
Output: Your function should return a string which contains the digits of the integer which represents the GCD. The returned string should not have any leading zeroes. Constraints:
1 <= P <= Q <= 10^100
Example:
Input:
P: 1
Q: 3

Output:
1

Greatest divisor that divides both 1 and 3 is 1.

Input:
P: 3412
Q: 3412


Output:
3412

As both the numbers are the same, greatest divisor that divides 3412 is 3412.
*/

/*
 Solution Approach
There is no point of converting P and Q to numbers, as they would not fit into a c++ data type, and if it does so (Python), caculating GCD of numbers from a range of 1 to 10100 would take a very very large amount of time. Instead, the question can be broken down to 2 cases.
Case 1: P == Q
        When P and Q are the same, it is obvious that the greatest divisor is the number itself.
        
Case 2: P ≠ Q
        When P and Q are not the same, our answer is GCD(P, P+1, P+2, ...., Q)
        But, we know that GCD(P, P+1) is always 1
        
        Proof:  We know that if a number D divides both A and B, it will also divide abs(A-B)
                Now, if B = A+1, let's assume D to be a number that divides both A and B.
                D should also divide abs(A-B) = abs(A - (A+1)) = 1
                But the only number to perfectly divide 1 is 1 itself, hence D has to be 1.
        
        Therefore, if P ≠ Q, answer is 1.

*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    string Solution::solve(string A, string B) {
    if(A == B) return A;
    else return "1";
}

    int main(){
         //input-output code
    return 0;
    }
};