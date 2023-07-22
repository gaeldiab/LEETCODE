#include <vector>
class Solution {
public:
    int singleNonDuplicate(std::vector<int>& nums) 
    {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        int element;
        if(high==0)
        {
            return nums[0];
        }
        else if(nums[0]!= nums[1])
        {
            return nums[0];
        }
        else if (nums[high]!=nums[high-1])
        {
            return nums[high];
        }
        while(low<=high)
        {
            mid = low + (high-low) /2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
            {
                return nums[mid];
            }
            if((nums[mid]==nums[mid+1] && mid%2 == 0) || (mid%2 == 1 && nums[mid]==nums[mid-1]))
            {
                low = mid+1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
    }
};