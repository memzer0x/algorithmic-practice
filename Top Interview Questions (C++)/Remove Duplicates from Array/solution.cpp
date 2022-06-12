#include <vector>

int removeDuplicates(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int k = 0; k < nums.size(); k++){
                if(i != k){
                    if(nums[i] == nums[k]){
                        nums.erase(nums.begin() + k);
                    }
                }
            }
            
        }
        return nums.size();
    }
