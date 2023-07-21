#include <vector>
class Solution 
{
public:
    void moveZeroes(std::vector<int>& nums) 
    {
        int left = 0;
        int right = 1 ; 
        while(right<nums.size())
        {
            if(nums[right]!=0)
            {
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
                right++;
                left++;
            }
            else
            {
                right++;
            }
            
        }
    }
};
//test case : 0,1,0,3,12
//1,0,0,3,12
//1,3,0,0,12
//1,3,12,0,0