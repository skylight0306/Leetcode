class Solution {
public:
    int mySqrt(int x) {
        long ans = 0;
        long xx = x;
        for ( long i = 0 ; ans < xx ; i++ )
        {
            ans = i * i ;
            if ( ans > xx ) return i - 1 ;
            else if ( ans == x ) return i;

        }
        
        return 0;
        
        
    }
};
