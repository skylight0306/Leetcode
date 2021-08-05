class Solution {
public:
    int climbStairs(int n) 
    {
        int ans = 1;
        int before = 0;
        int tmp = 0;
        
        for ( int i = 1 ; i <= n ; i++ )
        {
            tmp = ans;
            ans += before;
            before = tmp;
            
        }
        
        return ans;
    }
};
