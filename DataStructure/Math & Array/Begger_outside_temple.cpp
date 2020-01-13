/* Beggars Outside Temple
There are N (N > 0) beggars sitting in a row outside a temple. Each beggar initially has an empty pot. When the devotees come 
to the temple, they donate some amount of coins to these beggars. Each devotee gives a fixed amount of coin(according to his
 faith and ability) to some K beggars sitting next to each other. Given the amount donated by each devotee to the beggars rangin
 g from i to j index, where 1 <= i <= j <= N, find out the final amount of money in each beggar's pot at the end of the day, 
 provided they don't fill their pots by any other means.

 Input:
N = 5, D = [[1, 2, 10], [2, 3, 20], [2, 5, 25]]

Return: [10, 55, 45, 25, 25]

Explanation:
=> First devotee donated 10 coins to beggars ranging from 1 to 2. Final amount in each beggars pot after first devotee: [10, 10, 0, 0, 0]

=> Second devotee donated 20 coins to beggars ranging from 2 to 3. Final amount in each beggars pot after second devotee: [10, 30, 20, 0, 0]

=> Third devotee donated 25 coins to beggars ranging from 2 to 5. Final amount in each beggars pot after third devotee: [10, 55, 45, 25, 25]

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
vector<int> Solution::solve(int A, vector<vector<int> > &B) {
    int n= B.size();
    vector<int> res(A);
    for(int i=0;i<n;i++){
        res[B[i][0]-1] += B[i][2];
        if((B[i][1]) < A){
            res[B[i][1]] -= B[i][2];
        }
        // res[i] += res[i-1];
        // for(int j=B[i][0]-1;j<B[i][1];j++){
        //     res[j] += B[i][2];
        // }
    }
    for(int i=1;i<A;i++) res[i] += res[i-1];
    return res;
}

int main(){
    return 0;
}
};