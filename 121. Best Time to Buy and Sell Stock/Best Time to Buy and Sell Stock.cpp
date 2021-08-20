class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        if ( prices.size() < 2 ) return 0;
        int MAX = 0 ;
        int current = 0 ;
        int currentnum = prices[0];
        for ( int i = 1 ; i < prices.size() ; i++ )
        {
            
            currentnum = min( currentnum, prices[i-1] ) ;
            current = max( prices[i] - currentnum, prices[i] - prices[i-1] );
            MAX = max( current, MAX );
        }
        
        if ( MAX < 0 ) return 0;
        else return MAX;
        
    }
};
