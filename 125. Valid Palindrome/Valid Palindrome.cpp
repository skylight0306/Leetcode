class Solution {
public:
    bool isPalindrome(string s) {
        char ans[s.size()];
        string str = "";
        string tmp = "";
        for ( int i = 0 ; i < s.size() ; i++ )
        {
            if ( s[i] <= '9' && s[i] >= '0' || s[i] <= 'z' && s[i] >= 'a' )
                str += s[i];    
            else if ( s[i] <= 'Z' && s[i] >= 'A' )
                str += s[i] + 32;
        }
        tmp = str;

        reverse( tmp.begin(), tmp.end() ) ;

        return tmp == str ;
        
    }
};
