/*
Max Chunks To Make Sorted II
Given an array of integers (not necessarily distinct) A, if we split the array into some number of "chunks" (partitions), and individually sort each chunk. After concatenating them, the result equals the sorted array. What is the most number of chunks we could have made? 
Input Format
The only argument given is the integer array A.
Output Format
Return the maximum number of chunks that we could have made.
Constraints
1 <= N <= 100000
-10^9 <= A[i] <= 10^9
For Example
Input 1:
    A = [3, 2, 3, 4, 0]
Output 1:
    1

Input 2:
    A = [2, 0, 1, 2]
Output 2:
    2

Solution in JAVA
*/

public class Solution {
    public int solve(int[] A) {
        Map<Integer,Integer> c = new HashMap();
        List<Pair> counted = new ArrayList();
        for(int z : A){
            c.put(z,c.getOrDefault(z,0)+1);
            counted.add(new Pair(z,c.get(z)));
        }
        
        List<Pair> ex = new ArrayList(counted);
        Collections.sort(ex,(a,b) -> a.compare(b));
        
        Pair crr = counted.get(0);
        int a=0;
        for(int i=0;i<A.length;++i){
            Pair X  = counted.get(i),Y=ex.get(i);
            if(X.compare(crr) > 0) crr = X;
            if(crr.compare(Y) == 0) a++;
        }
        return a;
    }
    
}
class Pair {
    int val, count;
    Pair(int v, int c) {
        val = v; count = c;
    }
    int compare(Pair that) {
        return this.val != that.val ? this.val - that.val : this.count - that.count;
    }
}