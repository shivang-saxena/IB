/*
Sorted Permutation Rank
Given a string, find the rank of the string amongst its permutations sorted lexicographically. Assume that no characters are repeated. Example :
Input : 'acb'
Output : 2

The order permutations with letters 'a', 'c', and 'b' : 
abc
acb
bac
bca
cab
cba
The answer might not fit in an integer, so return your answer % 1000003
*/

/*   Solution Approach
Lets start by looking at the first character. If the first character is X, all permutations which had the first character less than X would come before this permutation when sorted lexicographically. Number of permutation with a character C as the first character = number of permutation possible with remaining N-1 character = (N-1)! Then the problem reduces to finding the rank of the permutation after removing the first character from the set. Hence,
rank = number of characters less than first character * (N-1)! + rank of permutation of string with the first character removed
Example
Lets say out string is “VIEW”. Character 1 : 'V'
All permutations which start with 'I', 'E' would come before 'VIEW'.
Number of such permutations = 3! * 2 = 12 Lets now remove ‘V’ and look at the rank of the permutation ‘IEW’. Character 2 : ‘I’
All permutations which start with ‘E’ will come before ‘IEW’
Number of such permutation = 2! = 2. Now, we will limit ourself to the rank of ‘EW’. Character 3:
‘EW’ is the first permutation when the 2 permutations are arranged. So, we see that there are 12 + 2 = 14 permutations that would come before "VIEW".
Hence, rank of permutation = 15.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    int fact(int val){
    int s=1;
    if(val==1 || val==0)
        return 1;
    else{
        while(val>0){
            s=(s% 1000003)*(val% 1000003);
            val--;
        }
    }
    return s;
}
int Solution::findRank(string A) {
    long long int sum=0;
    for(int i=0;i<A.length();i++){
        long long int cnt=0;
        for(int j=i+1;j<A.length();j++){
            if(A[j]<A[i]){
                cnt++;
            }
        }
        sum=sum+(fact(A.length()-i-1)*cnt)% 1000003;
    }
    return (sum+1)% 1000003;
}



    int main(){
         //input-output code
    return 0;
    }
};