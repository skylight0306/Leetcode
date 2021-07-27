class Solution {
public:
    int romanToInt(string s) {
        int num = strlen(s.c_str()) - 1 ;
        
        int sum = 0;
        for ( int i = num ; i > -1 ; i-- )
        {
            if ( s[i] == 'I' ) // 1
            {
                sum += 1;
            }
            else if ( s[i] == 'V' ) // 5
            {
                if ( i > 0 && s[i-1] == 'I' ) 
                {
                    i--;
                    sum += 4;
                }
                else sum += 5;
            }
            else if ( s[i] == 'X' ) // 10
            {
                if ( i > 0 && s[i-1] == 'I' ) 
                {
                    i--;
                    sum += 9;
                }
                else sum += 10;
            }            
            else if ( s[i] == 'L' ) // 50
            {
                if ( i > 0 && s[i-1] == 'X' ) 
                {
                    i--;
                    sum += 40;
                }
                else sum += 50;
            } 
            else if ( s[i] == 'C' ) // 100
            {
                if ( i > 0 && s[i-1] == 'X' ) 
                {
                    i--;
                    sum += 90;
                }
                else sum += 100;
            }
            else if ( s[i] == 'D' )
            {
                if ( i > 0 && s[i-1] == 'C' ) 
                {
                    i--;
                    sum += 400;
                }
                else sum += 500;
            }            
            else if ( s[i] == 'M' )
            {
                if ( i > 0 && s[i-1] == 'C' ) 
                {
                    i--;
                    sum += 900;
                }
                else sum += 1000;
            }
            
        }
        
        return sum;
    }
};
