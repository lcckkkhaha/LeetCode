class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int nums_length = nums.size();
        if(nums_length == 4 && nums[0]+nums[1]+nums[2]+nums[3]==target){
            vector<int> temp;
            temp.push_back(nums[0]);
            temp.push_back(nums[1]);
            temp.push_back(nums[2]);
            temp.push_back(nums[3]);
            vector<vector<int>> result_print;
            result_print.push_back(temp);
            return result_print;
        }
        if(nums_length < 4){
            vector<vector<int>> result_print;
            return result_print;
        }
        
        
        sort (nums.begin(), nums.end());
        set<vector<int>> result;
        //vector<vector<int>> result;

        for(int a=0;a<nums_length;a++){
            for(int b=a+1;b<nums_length;b++){
                for(int c=b+1;c<nums_length;c++){
                    for(int d=c+1;d<nums_length;d++){
                        if(nums[a]+nums[b]+nums[c]+nums[d]==target //&& !(nums[a]==nums[b] && nums[a]==nums[c] && nums[a]==nums[d]) 
                           && a!=b && a!=c && a!=d && b!=c && b!=d && c!=d ){
                            vector<int> temp;
                            temp.push_back(nums[a]);
                            temp.push_back(nums[b]);
                            temp.push_back(nums[c]);
                            temp.push_back(nums[d]);
                            //result.push_back(temp);
                            result.insert(temp);

                            
                        }
                    }
                }
            }
            
            
            
        }
        
        
        
        
        vector<vector<int>> result_print;
        copy(result.begin(), result.end(), std::back_inserter(result_print));

        
        
        
        return result_print;
        
    }
};
