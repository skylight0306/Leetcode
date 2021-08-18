class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans ;
        long num = 1;
        
        for ( int i = 1 ; i <= rowIndex + 1 ; i++ )
        {
            ans.push_back( num ) ;
            num = ( rowIndex - i + 1 ) * num / i ;  
            
        }
            return ans;
        
    }
};
