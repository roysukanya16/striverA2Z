// Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

// Input:
// S = i.like.this.program.very.much
// Output: much.very.program.this.like.i
// Explanation: After reversing the whole
// string(not individual words), the input
// string becomes
// much.very.program.this.like.i


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string ans;
        int n=s.length();
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            cnt++;
            if(s[i]=='.'){
                string store=s.substr(i+1,cnt-1);
                ans=ans+store;
                ans=ans+".";
                cnt=0;
            }
        }
       int i=0; 
        while(s[i]!='.'){
            i++;
        }
        string store=s.substr(0,i);
        ans=ans+store;
        
        return ans;
    } 
};
