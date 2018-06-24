class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        if(!nums.empty()){
            bool flag=false; 
            
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i] + nums[j] == target ){
                        result.push_back(i);
                        result.push_back(j);
                        flag=true;
                        break;
                    }
                }
                if(flag==true){
                    break;
                }
            }
        }
        
        
        
//         sort(nums.begin(), nums.end());
        
//         for(int i=0;i<nums.size();i++){
//             cout<<nums[i];
//         }
//         cout<<endl;
        
//         int valid_length=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>target){
//                 valid_length=i;
//                 break;
//             }
//         }
//         cout<<valid_length<<endl;
        
//         int middle_length=0;
//         for(int i=0;i<valid_length;i++){
//             if(nums[i]+nums[i+1]>target){
//                 middle_length=i;
//                 break;
//             }
//         }
//         cout<<middle_length<<endl;
//         for(int i=0;i<valid_length;i++){
//             for(int j=i+1;j<valid_length;j++){
//                 if(nums[i] + nums[j] == target ){
//                     result.push_back(i);
//                     result.push_back(j);
//                     break;
//                 }
//             }
//         }
        
        
        return result;
        
    }
};
