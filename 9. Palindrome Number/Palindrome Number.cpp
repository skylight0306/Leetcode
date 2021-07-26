class Solution {
public:
    bool isPalindrome(int x) {
        long reverse = 0;
        int oriX = x ; // origin x value
        int num = 0;
        while ( x > 0 )
        {
        
            num = x % 10 ;
            reverse = reverse * 10 + num;
            x /= 10;
        }
        
        if ( reverse == oriX ) return true;
        else return false;
    }
};
