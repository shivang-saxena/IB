/*
Cut the Chocolate
Dipen has a chocolate of N by M pieces. He and Damini started playing with this chocolate. First Dipen takes the chocolate and divides it into two parts by making either a horizontal or a vertical cut. Then, Damini takes one of the available pieces and divides it into two parts by making either a horizontal or a vertical cut. Then Dipen do the same thing again and so on. The player who cannot make a turn loses. When all pieces are of size 1 * 1 player can not make a turn. Find who will win if both of them play optimally. Input:
Two integers denoting N and M.
Output:
Single integer. 1 if Dipen is going to win, 0 if Damini is going to win.
Constraints:
1 <= N <= 10^9
1 <= M <= 10^9
Example:
Input:
N = 1, M = 2

Output: 
1

Explanation:
There is only one possible move, so Damini even won't have a chance to make move.
*/

/*
Solution Approach
Chocolate is of size n * m. So, total number of turns will be exactly n * m - 1. Observe that it is independent of the cut made by both players. Hence, only thing we need to find is n * m - 1 is even or odd. If it is odd then Dipen will always take last turn and will win else Damini will win. Note: take care of overflow in multiplication! You can use long long int to avoid overflow.
*/


#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::solve(int A, int B) {
    long long int n= (1LL*A*B)-1;
    
    if(n ==1) return 1;
    if(n % 2 == 0)
    return 0;
    else 
    return 1;
}


    int main(){
         //input-output code
    return 0;
    }
};