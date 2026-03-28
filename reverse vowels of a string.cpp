/*Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', 
and they can appear in both lower and upper cases, more than once.*/ 



/***************************** approach 1 ******************************* */
 /* tje approch is to traverse from start and the end if we found the vowels we will stop and swap it with the send
   one vowelss and increments the i and decrement th j  other wise we will only  decremet the j till we get the vowel.
    time complexity O(n/2)
    space complexity O(1).*/

    class Solution {
public:
    string reverseVowels(string s) {
        int i=0; 
        int j= s.length()-1;
          while(i<j){

              if((s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| 
              s[i]=='A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U' ) && 
               (s[j]=='a' || s[j]=='e'|| s[j]=='i'|| s[j]=='o'|| s[j]=='u'|| 
               s[j]=='A' || s[j]=='E'|| s[j]=='I'|| s[j]=='O'|| s[j]=='U' )){
                    swap(s[i],s[j]);
                    i++;
                    j--;
              } 
               if(s[j]!='a' && s[j]!='e'&& s[j]!='i'&& s[j]!='o'&& s[j]!='u'&& 
              s[j]!='A' && s[j]!='E'&& s[j]!='I'&& s[j]!='O'&& s[j]!='U'){
                    j--;
               } 
              else  {
                 i++;
               }
          }
           return s;
    }
   
};