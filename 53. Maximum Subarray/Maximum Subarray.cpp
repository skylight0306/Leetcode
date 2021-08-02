class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // if ( nums.size() == 0 ) return 0 ;
        int global_max = nums[0];
        int current_max = nums[0];
        for ( int i = 1 ; i < nums.size() ; i++ )
        {
            /*
            cout << "i" << i << endl;
            cout << "current_max" << current_max << endl;
            cout << "global_max" << global_max << endl;
            cout << "----" << endl ;
            */
            current_max = max( nums[i], current_max + nums[i] ) ;    
            if ( current_max > global_max ) global_max = current_max ;         
        }
        
        return global_max;
    }
};
