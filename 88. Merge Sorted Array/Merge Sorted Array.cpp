class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans ;
        int msum = 0;
        int nsum = 0;
        
        if ( m == 0 ) 
        {
            nums1 = nums2;
            return;
        }
        else if ( n == 0 ) return ;
        
        
        for ( int i = 0 ; i < n ; i++ ) nums1.pop_back();
        
        for ( int i = 0 ; i < ( m + n ) ; i++ )
        {

            if ( msum < m && nsum < n )
            {
                if ( nums1[msum] > nums2[nsum] )
                {
                    ans.push_back( nums2[nsum] );
                    nsum++;
                }
                
                else      
                {
                    ans.push_back( nums1[msum] );
                    msum++;
                }
                

            }
            else if ( msum >= m && nsum < n )
            {
                for ( int j = nsum ; j < n ; j++ ) ans.push_back( nums2[j] );
                nums1 = ans;
                return;
            }
            else if ( nsum >= n && msum < m )
            {
                for ( int j = msum ; j < m ; j++ ) ans.push_back( nums1[j] );
                nums1 = ans;
                return;                
                
            }
            
            
        }
        
        nums1 = ans;
        
        return ;
        
        
    }
};
