/*
Reverse integer
Reverse digits of an integer. Example1: x = 123, return 321 Example2: x = -123, return -321 Return 0 if the result overflows and does 
not fit in a 32 bit signed integer
*/

/*
Solution Approach
Here are some good questions to ask before coding. If the integer’s last digit is 0, what should the output be? ie, cases such as 10, 100. Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases? Tips: 1) num % 10 gives you the last digit of a number. 2) num / 10 gives
 you the number after removing the last digit. 3) num * 10 + digit appends the digit at the end of the number.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::reverse(int A) {
    bool f=false;
    if(A < 0 ){
        f=true; A = -A; 
    }
    
    long long n=0;
    while(A != 0){
        int r= A% 10;
        n= n*10+r;
        
        if(n > INT_MAX  || n< INT_MIN){
        return 0;
        }
        A /= 10;
    }
    
    return (f == true) ? -n : n;
}

    int main(){
         //input-output code
    return 0;
    }
};