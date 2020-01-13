/*Maximum Consecutive Gap
Given an unsorted array, find the maximum difference between the successive elements in its sorted form. Try to solve it in linear time/space. Example :
Input : [1, 10, 5]
Output : 5 
Return 0 if the array contains less than 2 elements.
You may assume that all the elements in the array are non-negative integers and fit in the 32-bit signed integer range.
You may also assume that the difference will not overflow.
*/

#include<bits/stdc++.h>
using namespace std;
class Box{
    public:
    bool flag = false;
    int minarr = numeric_limits<int>::max();
    int maxarr = numeric_limits<int>::min();
};

class Solution{
int Solution::maximumGap(const vector<int> &A) {
    if(A.empty() || A.size()<2) return 0;
    
    int minElement= *min_element(A.begin(),A.end());
    int maxElement = *max_element(A.begin(),A.end());
    
    int tempA = max(1,(maxElement - minElement) / ((int)A.size()-1));
    int tempAsize = (maxElement - minElement) / tempA+1;
    vector<Box> boxes(tempAsize);
    
    for(auto&& arr:A){
        int boxIndex=(arr - minElement)/tempA;
        boxes[boxIndex].flag= true;
        boxes[boxIndex].minarr = min(arr,boxes[boxIndex].minarr);
        boxes[boxIndex].maxarr = max(arr,boxes[boxIndex].maxarr);
    }
    
    int prevBoxMax=minElement,Gap=0;
    for(auto&& drr : boxes){
        if(!drr.flag) continue;
        
        Gap = max(Gap,drr.minarr - prevBoxMax);
        prevBoxMax = drr.maxarr;
    }
    return Gap;
}
int main(){
    //inputs
    return 0;
}
};