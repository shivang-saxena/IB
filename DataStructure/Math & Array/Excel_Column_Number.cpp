/*
Excel Column Number
Given a column title as appears in an Excel sheet, return its corresponding column number. Example:
    A -> 1

    B -> 2

    C -> 3

    ...

    Z -> 26

    AA -> 27

    AB -> 28 
*/

/*
Simple math. This is just like base 26 number conversion. number = 26^0 * (S[n - 1] - ‘A’ + 1) + 26^1 * (S[n - 2] - ‘A’ + 1) + …. 
We recommend you to check out the piece on base number conversion in articles again. Please also attempt the sample problem associated
 with it.
 */

#include<bits/stdc++.h>
using namespace std;

class Solution{
int Solution::titleToNumber(string A) {
    int n=A.size();
    int res=0,j=n-1;
    for(int i=0;i<n;i++){
        int x=A[i]-'A'+1;
        res=res+pow(26,j)*x;
        j--;
    }
    return res;
}
    int main(){
         //input-output code
    return 0;
    }
};