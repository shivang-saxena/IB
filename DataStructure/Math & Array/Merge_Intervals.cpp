/*
Merge Intervals
Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary). You may assume that the 
intervals were initially sorted according to their start times. Example 1: Given intervals [1,3],[6,9] insert and merge [2,5] would 
result in [1,5],[6,9]. Example 2: Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16]. 
This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10]. Make sure the returned intervals are also sorted.
*/

/*   Solution Approach
Have you covered the following corner cases : 1) Size of interval array as 0. 2) newInterval being an interval preceding all intervals in the array.
    Given interval (3,6),(8,10), insert and merge (1,2)
3) newInterval being an interval succeeding all intervals in the array.
    Given interval (1,2), (3,6), insert and merge (8,10)
4) newInterval not overlapping with any interval and falling in between 2 intervals in the array.
    Given interval (1,2), (8,10) insert and merge (3,6) 
5) newInterval covering all given intervals.
    Given interval (3, 5), (7, 9) insert and merge (1, 10)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{

 bool mycomp(Interval a,Interval b){
     return a.start<b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
     intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),mycomp);
    vector<Interval> res;
    int n=intervals.size();
    res.push_back(intervals[0]);
    for(int i=1;i<n;i++){
        if(intervals[i].start<=res[res.size()-1].end)
         res[res.size()-1].end=max(res[res.size()-1].end,intervals[i].end);
        else
         res.push_back(intervals[i]);
    }
    return res;
}
    int main(){
         //input-output code
    return 0;
    }
};