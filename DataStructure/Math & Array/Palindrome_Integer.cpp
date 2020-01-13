/*
Palindrome Integer
Determine whether an integer is a palindrome. Do this without extra space. A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed. Negative numbers are not palindromic. Example :
Input : 12121
Output : True

Input : 123
Output : False
*/

/*
 Solution Approach
Corner cases to consider: 1) Negative numbers 2) If you are thinking of converting the integer to string, note the restriction of 
using extra space. 3) Try reversing the integer. 
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    int Solution::isPalindrome(int A) {
   int B=A,rev=0;
   if(A<0) return 0; 
   while(B != 0){
       rev=rev*10+(B%10);
       B=B/10;
   }
   if(A == rev) return 1;
   else return 0;
}


    int main(){
         //input-output code
    return 0;
    }
};