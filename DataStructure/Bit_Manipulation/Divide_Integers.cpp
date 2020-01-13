/*
Divide Integers
Divide two integers without using multiplication, division and mod operator. Return the floor of the result of the division. Example:
5 / 2 = 2
Also, consider if there can be overflow cases. For overflow case, return INT_MAX. Note: INT_MAX = 2^31 - 1
*/

/*
  Solution Approach
Think in terms of bits. How do you do the division with bits?
How do you determine the most significant bit in the answer?
Iterate on the bit position ‘i’ from 31 to 1 and find the first bit for which divisor«i is less than dividend.
How do you use (1) to move forward in similar fashion?
*/


#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::divide(int A, int B) {
int sign = 1;
    if (A<0){sign = -sign;}
    if (B<0){sign = -sign;}
     
    unsigned long long tmp = abs((long long)A);
    unsigned long long tmp2 = abs((long long)B);
            
    unsigned long c = 1;
    while (tmp2 < tmp){
        tmp2 = tmp2<<1;    
        c = c<<1;
    }
     
    long long res = 0;
    while (tmp>=abs((long long)B)){
        while (tmp2 <= tmp){
            tmp -= tmp2;
            res = res+c;
        }
        tmp2=tmp2>>1;
        c=c>>1;    
    }
     
    return (sign*res >= INT_MAX ||  sign*res < INT_MIN) ? INT_MAX : sign*res;
    
}



    int main(){
         //input-output code
    return 0;
    }
};