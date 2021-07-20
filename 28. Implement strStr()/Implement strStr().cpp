class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleSum = needle.size() ;
        int haystackSum = haystack.size() ;
  
        if (　needleSum == 0 ) return 0;
        else if ( haystack.size() < needleSum ) return -1;
        
        for ( int i = 0 ; i <= haystack.size() - needleSum ; i++ )
        {
            if ( haystack.substr( i, needleSum ) == needle ) return i;
        }
         
        return -1;
    }
};
