/*Spiral Order Matrix II
Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order. 
 Input Format:
The first and the only argument contains an integer, A.
Output Format:
Return a 2-d matrix of size A x A satisfying the spiral order.
Constraints:
1 <= A <= 1000
Examples:
Input 1:
    A = 3

Output 1:
    [   [ 1, 2, 3 ],
        [ 8, 9, 4 ],
        [ 7, 6, 5 ]   ]

Input 2:
    4

Output 2:
    [   [1, 2, 3, 4],
        [12, 13, 14, 5],
        [11, 16, 15, 6],
        [10, 9, 8, 7]   ]
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{

    vector<vector<int> > Solution::generateMatrix(int A) {
    int x=0,m=0,r=A-1,b=A-1;
    int k=0,c=1;
    
    vector<vector<int>>temp(A,vector<int>(A));
    while(x <= b && m <=r){
        if(k==0){
            for(int i=m;i<=r;i++){
                temp[x][i]=c;c++;
            }
            k=1;x++;
        }
        else if(k == 1){
            for(int i=x;i<=b;i++){
                temp[i][r]=c;c++;
            }
            k=2;r--;
        }
        else if(k == 2){
            for(int i=r;i>=m;i--){
                temp[b][i]=c;c++;
            }
            k=3;b--;
        }
        else if(k == 3){
            for(int i=b;i>=x;i--){
                temp[i][m]=c;c++;
            }
            k=0;m++;
        }
        
    }
    return temp;
}

    int main(){
         //input-output code
    return 0;
    }
};