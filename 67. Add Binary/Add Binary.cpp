class Solution {
public:
    string addBinary(string a, string b) {
        bool carry = false;
        int alen = a.size() - 1 ;
        int blen = b.size() - 1 ;
        
        
        string ans = "";
        int num = 0;

        
        while ( alen >= 0 || blen >= 0 )
        {
            num = 0;
            
            if ( alen >= 0 )
            {
                if ( a[alen] == '1' ) num++;
                alen--;
                
            }
            
            if ( blen >= 0 )
            {
                if ( b[blen] == '1' ) num++;
                blen--;
            }
            
            if ( carry ) num++;
            
            if ( num == 3 )
            {
                ans += "1";
                carry = true;
            }
            else if ( num == 2 )
            {
                ans += "0";
                carry = true;
            }
            else if ( num == 1 )
            {
                ans += "1";
                carry = false;
            }
            else 
            {
                ans += "0";
                carry = false;
            }
            
            
        }
        
        if ( carry ) ans += "1" ;
        reverse( ans.begin(), ans.end() );
        return ans;
    }
};
