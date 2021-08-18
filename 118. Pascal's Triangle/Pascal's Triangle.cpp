class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> tmp;
        vector<int> push ;
        tmp.push_back( 1 ) ;
        ans.push_back( tmp ) ;
        
        if ( numRows == 1 ) return ans;
        tmp.push_back( 1 ) ; // [1,1]
        ans.push_back( tmp ) ;
        if ( numRows == 2 ) return ans;
        
        
        for ( int i = 2 ; i < numRows ; i++ )
        {
            push = tmp; // [1,1]
            for ( int j =  1 ; j < ans[i-1].size() ; j++ )
            {
                push.insert( push.begin() + j, ans[i-1][j-1] + ans[i-1][j] ) ;
                
            }
            
            ans.push_back( push ) ;
            
        }
        
        
        return ans;
    }
};
