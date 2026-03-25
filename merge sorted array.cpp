/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function,
 but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 */


 /**************************************** approach 1 ************************************ */
  /* the intution is that we will make extra  array  and insert the both arra ynum into it 
  and sort it and then insert it to the  array 1.
    time complexity O( n+ log (n)
    space complexity O(n+m)*/

    class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>res; 
        int k = m-n;
         for(int i=0  ;i<m ; i++)
         {
             res.push_back(nums1[i]);
         } 
          for(int  j=0 ; j<n ; j++)
          {
             res.push_back(nums2[j]);
          } 
           sort(res.begin() , res.end());
            for(int i=0 ; i<m+n ; i++)
            {
                 nums1[i] = res[i];
            }
    }
};



/**************************************************** approach 2 ****************************** */
/* we will use the pointers  from the back side  two on the end of the two arryas 
and one k in the end ofh te array 1 where 0  is their.
  we will ocmpare both the array one by one elemtns 
   whcih ever element is greater  place it to the k th position and decrement it .
    doing it till k is greater than the k. 
      
     time complexity O(n)
     space complexityO(1)*/ 

     class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>res; 
        int k = m-n;
         for(int i=0  ;i<m ; i++)
         {
             res.push_back(nums1[i]);
         } 
          for(int  j=0 ; j<n ; j++)
          {
             res.push_back(nums2[j]);
          } 
           sort(res.begin() , res.end());
            for(int i=0 ; i<m+n ; i++)
            {
                 nums1[i] = res[i];
            }
    }
};