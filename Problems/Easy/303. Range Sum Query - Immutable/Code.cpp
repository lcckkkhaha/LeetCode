/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */




/** Brutal Force
class NumArray {
private:
vector<int> nums_1;
public:
    NumArray(vector<int> nums) {
        nums_1 =nums;
    }
    
    int sumRange(int i, int j) {
        int result=0;
        //vector<int> nums_2=nums_1;
        for(int x=i;x<=j;x++){
            result=result+nums_1[x];
        }
        return result;
    }
};
*/


//Accumulated sum
class NumArray {
private:
    vector<int> nums_1;
public:
    
    NumArray(vector<int> nums) {
        nums_1.push_back(0);
        for(int x=1;x<nums.size()+1;x++){
            nums_1.push_back(nums_1[x-1]+nums[x-1]);
            //nums_1[x]=nums_1[x-1]+nums[x-1];
        }
    }
    
    int sumRange(int i, int j) {
        int result=0;
        result=nums_1[j+1]-nums_1[i];
        //vector<int> nums_2=nums_1;
        // for(int x=i;x<=j;x++){
        //     result=result+nums_1[x];
        // }
        return result;
    }
};
