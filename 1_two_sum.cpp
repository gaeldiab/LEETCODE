#include <vector>
#include <string>
#include <iostream>
class Solution 
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        std::vector<int> output;
        for (int i=0;i<nums.size()-1;i++)
        {
            for (int j=i+1; j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    output.push_back(i);
                    output.push_back(j);
                    break;
                }
            }
        }
        return output;
    }
};