/*
Wave Array
Given an array of integers, sort the array into a wave like array and return it, In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... Example
Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]
 NOTE : If there are multiple answers possible, return the one thats lexicographically smallest. So, in example case, you will return [2, 1, 4, 3]

 */

#include<bits/stdc++.h>
using namespace std;

class Solution{

    vector<int> Solution::wave(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    for(int i=1;i<n;i += 2){
        swap(A[i],A[i-1]);
    }
    return A;
}

    int main(){
         //input-output code
    return 0;
    }
};


/*
Solution Approach
array = {5, 1, 3, 4, 2}

Sort the above array. 

array = {1, 2, 3, 4, 5}

Now swap adjacent elemets in pairs.

swap(1, 2)
swap(3, 4)

Now, our array = {2, 1, 4, 3, 5}

and voila!, the array is in the wave form.
*/