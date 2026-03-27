/*You have a long flowerbed in which some of the plots are planted, and some are not. However,
 flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's,
 where 0 means empty and 1 means not empty, and an integer n,
  return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.*/


  /***********************************approach 1 **************************** */
  /* if we look at the condition is simple we cna only place flower if and only if its both left and right 
  is empty .
   s we will check if its the right spot to plant the flower  the edge cases are their as if the 0 and 1 indx
    are mpty we can place  teh flower at the starting as its left is empty we assume and the right is also empty .
     this same is with t he right end of the arry. 
      time complexity O(n)
       space complexity O(1). */ 

       class Solution {
    public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0 ; i<flowerbed.size() ; i++){
             bool left = (i==0)|| flowerbed[i-1]==0;
             bool right = (i==flowerbed.size()-1)|| flowerbed[i+1]==0;
             if(flowerbed[i]==0 && left && right){
                 n--;
                 flowerbed[i]=1;
             }
        }
        return n<=0;
    }
};
