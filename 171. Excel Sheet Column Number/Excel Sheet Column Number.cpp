class Solution {
public:
    int titleToNumber(string columnTitle) {

        int num = 0;
        int ans = 0;
        for ( int i = 0 ; i < columnTitle.size() ; i++ )
        {
            num = columnTitle[i] - 'A' + 1 ;
            ans *= 26;
            ans += num;
            
        }
        
        return ans;
    }
};
