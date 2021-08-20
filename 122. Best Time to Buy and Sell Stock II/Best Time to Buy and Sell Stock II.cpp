class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if ( prices.size() < 2 ) return 0;
        int MIN = prices[0];
        int MAX = 0;

        int earn = 0;
        
        for ( int i = 1 ; i < prices.size() ; i++ ) 
        {
            while ( i < prices.size() && prices[i] < MIN )
            {
                
                MIN = prices[i];
                i++;
            }
            if ( i >= prices.size() ) return earn;
            
            MAX = prices[i];
            i++;
            
            while ( i < prices.size() && prices[i] > MAX )
            {
                
                MAX = prices[i];
                i++;
            }
            
            earn += MAX - MIN;
            
            MIN = prices[i];
            
            
            
            
            
        }
        
        return earn;
        
        
    }
};
