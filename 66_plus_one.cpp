class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int>output;
        int pointer = 0;
        int s = digits.size();
        int carry = 0;
        while(pointer<digits.size())
        {
            if(pointer == s-1)
            {
                digits[pointer]+=1;
                if(digits[pointer]>9)
                {
                    
                    carry = digits[pointer]/10;
                    output.push_back(carry);
                    output.push_back(digits[pointer]%10);
                }
                else
                {
                    output.push_back(digits[pointer]);
                }
                

            }
            else
            {
                output.push_back(digits[pointer]);
            }
            pointer++;
        }
        return output;
        
        //will have a carry
    }
};