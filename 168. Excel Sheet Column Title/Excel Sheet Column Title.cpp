class Solution {
public:
    string convertToTitle(int columnNumber) {

        char ch = '\0';
        string ans = "";
        while ( columnNumber > 0 )
        {
            ch = ( columnNumber - 1 ) % 26 + 65;
            columnNumber = ( columnNumber - 1 ) / 26 ;          
            ans += ch ;
        }
        reverse( ans.begin(), ans.end() );
        return ans;
        
    }
};
