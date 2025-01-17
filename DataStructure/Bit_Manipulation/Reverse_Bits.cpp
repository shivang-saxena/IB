/*
Reverse Bits
Reverse the bits of an 32 bit unsigned integer A. Input Format:
    First and only argument of input contains an integer A
Output Format:
    return a single unsigned integer denoting minimum xor value
Constraints:
0 <= A < 2^32
For Examples :
Example Input 1:
    A = 0
Example Output 1:
    0
Explanation 1:
        00000000000000000000000000000000  
=>      00000000000000000000000000000000
Example Input 2:
    A = 3
Example Output 2:
    3221225472
Explanation 2:
          00000000000000000000000000000011 
=>        11000000000000000000000000000000
*/


/*
Solution Approach
Reversing bits could be done by swapping the n/2 least significant bits with its most significant bits. The trick is to implement a function called swapBits(i, j), which swaps the ‘i’th bit with the ‘j’th bit. If you still remember how XOR operation works:
0 ^ 0 == 0, 
1 ^ 1 == 0, 
0 ^ 1 == 1, and 
1 ^ 0 == 1.
We only need to perform the swap when the ‘i’th bit and the ‘j’th bit are different. To test if two bits are different, we could use the XOR operation. Then, we need to toggle both ‘i’th and ‘j’th bits. We could apply the XOR operation again. By XOR-ing the ‘i’th and ‘j’th bit with 1, both bits are toggled. Bonus approach (The divide and conquer approach): Remember how merge sort works? Let us use an example of n == 8 (one byte) to see how this works:

              01101001

             /        \

           0110       1001

          /   \       /   \

         01    10    10    01

        /\     /\    /\     /\

       0  1   1  0  1  0   0  1
The first step is to swap all odd and even bits. After that swap consecutive pairs of bits, and so on … Therefore, only a total of log(n) operations are necessary. Example: For the first step, you would do:
    x = ((x & 0x55555555) << 1) | ((x & 0xAAAAAAAA) >> 1);
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
unsigned int Solution::reverse(unsigned int A) {
    unsigned int bits= sizeof(A)*8;
    unsigned int rev=0;
    for(int i=0;i<bits;i++){
        if((A&(1 << i))){
            rev |= 1<<((bits-1)-i);
        }
    }
    return rev;
}

    int main(){
         //input-output code
    return 0;
    }
};