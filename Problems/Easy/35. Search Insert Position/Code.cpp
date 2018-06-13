class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result=0;
        int length=nums.size();
        for(int i=0;i<length;i++){
            if(nums[i]==target){
                return i;
            }
            if(nums[i]<target){
                result++;
            }
        }
        return result;
        
    }
};
