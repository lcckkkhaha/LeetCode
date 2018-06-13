class Solution {
public:
    int reverse(int x) {
        double result = 0;
        int temp=0;
        vector<int> nums;
        cout<<pow(2,30)<<endl;
        if(x>pow(2,31)-1 || x<-pow(2,31) || x==0){
            return 0;
        }
        
        if(x>0){
            //vector<int> nums;
            //int temp=0;
            for(int i=1;i<=10;i++){

                nums.push_back(fmod(x,pow(10,i))/pow(10,i-1));
                cout<<fmod(x,pow(10,i))/pow(10,i-1)<<endl;
                x=x-fmod(x,pow(10,i));
                if(x==0){
                    temp=i;
                    break;
                }
            }
            //int result = 0;
            int n=temp;
            for(int i=0;i<n;i++){
                result = result + nums[i]*pow(10,temp-1);
                temp--;
                
            }
            if(result>pow(2,31)-1 || result<-pow(2,31) || result==0){
            return 0;
            }
            return result;
        }
        
        
        if(x<0){
            x=x*(-1);
            //vector<int> nums;
            //int temp=0;
            for(int i=1;i<=10;i++){

                nums.push_back(fmod(x,pow(10,i))/pow(10,i-1));
                //cout<<fmod(x,pow(10,i))/pow(10,i-1)<<endl;
                x=x-fmod(x,pow(10,i));
                if(x==0){
                    temp=i;
                    break;
                }
            }
            //int result = 0;
            // for(int i=0;i<nums.size();i++){
            //     cout<<nums[i]<<endl;
            // }
            int n=temp;
            for(int i=0;i<n;i++){
                
                result = result + nums[i]*pow(10,temp-1);
                //cout<<result<<endl;
                temp--;
                
            }
            
            
            if(result>pow(2,31)-1 || result<-pow(2,31) || result==0){
            return 0;
            }
            result=result*(-1);
            return result;
        }
        
        
        
    
    }
};
