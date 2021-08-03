class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int num = digits.size();
        digits[ num-1 ] += 1;
        
        while( num > 0 && digits[ num-1 ] > 9 )
        {
            digits[ num-1 ] = 0;
            if ( ( num - 1 ) > 0 ) digits[ num-2 ] += 1;
            else digits.insert( digits.begin(), 1 ) ;
            num--;
        }
        
        return digits;
    }
};
