#include <unordered_set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        //set.find returns iterator to parameter if paramter is in the set else it returns set.end
        std::unordered_set<int> seenSet;
        for(int num : nums){
            if(seenSet.find(num) != seenSet.end()){
                return true;
            }
            seenSet.insert(num);
        }
        return false;
    }
};