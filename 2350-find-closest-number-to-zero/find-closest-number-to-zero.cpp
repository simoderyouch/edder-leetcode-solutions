#include <cstdlib>
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        int small_one = 99999999;

        for ( int n : nums ) {

            if ( abs(n) < abs(small_one)    ) {

                small_one = n;
                
                
            }

            if ( abs(n) == abs(small_one)  && n > small_one ) {
                     small_one = n;
                }

        }

        return small_one;
        
    }
};