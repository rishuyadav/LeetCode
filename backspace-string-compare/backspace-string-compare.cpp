/*Algorithm:

Scanning the String from right to left.
Maintaining the "#" count.
Incrementing 'count' variable if the character encountered is '#'.
Otherwise decrementing the count and if the count is 0, append that character to the result.
Performing above for both the strings, comparing the results and return true/false accordingly.*/
class Solution {
public:    
    string getString(string &str) {
        int n=str.length(), count=0;
        string result="";
        for(int i=n-1; i>=0; i--) {
            char ch=str[i];
            if(ch=='#') 
                count++;
            else {
                if(count>0)
                    count--;
                else {
                    result+=ch;
                }                     
            }
        }
        return result;        
    }
    
    bool backspaceCompare(string S, string T) {
        return getString(S)==getString(T);
    }
};