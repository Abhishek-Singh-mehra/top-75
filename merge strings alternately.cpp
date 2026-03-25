/*You are given two strings word1 and word2. 
Merge the strings by adding letters in alternating order, starting with word1.
 If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.*/ 

/***********************************approach 1 ********************** */ 
/* the intution is that we make an extra array.
    use the two pointer to tranverse the arrays & alternativelts add it to the string .
     time complexity O(n+m).
      space complexity O(n+m)
      leetcoee link = */ 

    class Solution {
    public:
    string mergeAlternately(string word1, string word2) {
           int i=0;
           int j=0;
           string ans ; 
           while(i<word1.length() && j<word2.length()){
                 ans.push_back(word1[i]);
                 ans.push_back(word2[j]);
                 i++;
                 j++;
           } 
            while(i<word1.length()){
                ans.push_back(word1[i]);
                 i++;
            } 
            while(j<word2.length()){
                 ans.push_back(word2[j]);
                 j++;
            }
            return ans ;
    }
};