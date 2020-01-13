/*FizzBuzz
 Fizzbuzz is one of the most basic problems in the coding interview world. Try to write a small and elegant code for this problem. 
Given a positive integer A, return an array of strings with all the integers from 1 to N. But for multiples of 3 the array should have “Fizz” instead of the number. For the multiples of 5, the array should have “Buzz” instead of the number. For numbers which are multiple of 3 and 5 both, the array should have "FizzBuzz" instead of the number. Look at the example for more details. Example
A = 5
Return: [1 2 Fizz 4 Buzz]
*/


/*
 Solution Approach
While Iterating from 1 to N, you need to check the following conditions in sequence:
Check whether the number is divisible by 3 and 5, if that is the case, print FizzBuzz.
Check whether the number is divisible by 3, in that case, print Fizz.
Next, check whether the number is divisible by 5, in that case print Buzz.
Otherwise, print the number.
Time Complexity: O(N)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    vector<string> Solution::fizzBuzz(int A) {
    vector<string> res;
    for(int i=1;i<=A;i++){
        if(i%15 == 0) res.push_back("FizzBuzz");
        else if(i%3 == 0) res.push_back("Fizz");
        else if(i%5 == 0) res.push_back("Buzz");
        else res.push_back(to_string(i));
    }
    return res;
}

    int main(){
         //input-output code
    return 0;
    }
};


