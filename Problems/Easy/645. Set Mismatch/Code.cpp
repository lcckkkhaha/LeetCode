class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        vector<int> nums_copy=nums;
        //int temp=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             result.push_back(nums[i]);
        //             //temp=nums[i];
        //         }
        //     }
        // }
        
        sort(nums_copy.begin(), nums_copy.end());
        for(int i=0;i<nums_copy.size();i++){
            if(nums_copy[i]==nums_copy[i+1]){
                result.push_back(nums_copy[i+1]);
                break;
            }
        }
        
        
        
        int count=0;
        for(int i=1;i<=nums.size()+1;i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    count++;
                    //nums.erase(nums.begin()+j);
                    break;
                }
            }
            if(count==0){
                result.push_back(i);
                break;
            }
            count=0;
        }
        //result.push_back(temp);
        return result;
    }
};
