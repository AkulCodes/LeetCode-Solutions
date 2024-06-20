#include<vector>
#include "../../../../usr/include/c++/11/bits/algorithmfwd.h"

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf = 0;
        int left = 0;
        int right = 0; 
        while(right < prices.size()){
            if(prices[right] > prices[left]){
                maxProf = max(maxProf, prices[right] - prices[left]);
            }
            else{
                left = right;
            }
            right++;
        }
        return maxProf;
    }
};