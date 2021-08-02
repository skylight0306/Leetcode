class Solution {
public:
    int lengthOfLastWord(string s) {

        int last = 0;
        int count = 0;
        
        for ( int i = 0 ; i < s.size() ; i++ )
        {
            if ( s[i] != ' ' )
            {
                count++ ;
                
            }
            else 
            {
                if ( count != 0 ) last = count ;
                count = 0;

            }
            
            
        }
        
        if ( count != 0 ) last = count ;
        
        
        return last;
    }
};
