class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftindex=0, rightindex=nums.size()-1;
        int leftsum=0,sum=0;
        for (int n: nums)
        {
            sum+=n;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(leftsum== sum-leftsum-nums[i])
            {
                return i;
            }
            leftsum += nums[i];
            //printf("Sum %d", &sum);
            
        }
        return -1;
    }
};