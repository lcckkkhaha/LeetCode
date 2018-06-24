class Solution {
public:

    int rob(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        
        int result = 0;
        int length = nums.size();

        
        if(length==1){
            return nums[0];
        }
        if(length==2){
            return max(nums[0],nums[1]);
        }        
        
        
        vector<int> f(length,0);
        f[0]=nums[0];
        f[1]=max(nums[0],nums[1]);
            
        for(int i=2;i<length;i++){
            f[i] = max(f[i-2]+nums[i],f[i-1]);
        }
        result = f[length-1];
        cout<<"DP:"<<f[length-1]<<endl;
        
        

        
        
        
        return result;
        
        
        
    }
};
