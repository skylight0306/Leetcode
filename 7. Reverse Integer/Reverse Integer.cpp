class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        int num = 0;
        bool negative = false;
        if ( x < 0 ) 
        {
            negative = true;
            if ( x <= -2147483648 ) return 0;
            x *= -1;
        }
        else if ( x == 0 ) return 0;
        
        if ( x < 10 )
        {
            if ( negative ) return ( x * -1 ) ;
            else return x ;
        }
        
        while ( x > 9 )
        {
            num = x % 10 ;
            ans = ans*10 + num;
            x /= 10;
            
            if( ans > INT_MAX ) return 0;
        }
        
        ans = ans*10 + x;   
        if( ans > INT_MAX ) return 0;
        if ( negative ) return ( ans * -1 ) ;
        else return ans ;        
        
        
    }
};
