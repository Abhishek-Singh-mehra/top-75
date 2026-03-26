/*here are n kids with candies. You are given an integer array candies,
 where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, 
 denoting the number of extra candies that you have.

Return a boolean array result of length n, 
where result[i] is true if, after giving the ith kid all the extraCandies,
 they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies*/



/**************************************************approach 1***************************** */ 
/* the intution is that we first get the maximum elemtn in the array .
  then again traverse the caondies array aadn check every time by adding the extra
   candies to the original if its greater than the max  insert the true   other wise false.
    time complexity O(n)
     space complexity O(n)*/

     class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
          
          /* for(int i=1 ;i<candies.size() ;i++){
             if(candies[i]>max)max= candies[i];
          }*/
         int  maximum =  *std::max_element(candies.begin() ,candies.end());
           vector<bool>ans(candies.size());
            for(int i=0; i<candies.size() ;i++){
                  if(maximum<=(candies[i]+extraCandies))ans[i]=true;
                  else ans[i] =false;
            }
           return ans ;
    }
};