#define min(a,b) ((a)<=(b)?(a):(b))
class Solution {
public:    
    
    int trap(vector<int>& height) {
        //vector<int> rain_water; 
        int result=0;
        if(!height.empty()){
            int begin_index=0;
        for(int i=0;i<height.size();i++){
            if(height[i]>0){
                begin_index=i;
                break;
            }    
        }
        
        int convex_length=0;
        int flag=0;
        int mark=0;
        for(int i=begin_index;i<height.size();i=i+1+convex_length){
            for(int j=i+1;j<height.size();){
                //cout<<i<<":"<<j<<endl;
                if(height[j]<height[i]){
                    j++;
                    if(j>=height.size()){
                        flag=1;
                    }
                }else{
                    convex_length=j-i-1;
                    //cout<<i<<":"<<j<<endl;
                    //cout<<convex_length<<endl;
                    int rain=min(height[i],height[j])*convex_length;
                    for(int x=i+1;x<j;x++){
                        rain=rain-height[x];
                    }
                    result=result+rain;
                    //rain_water.push_back(rain);
                    mark=j;
                    break;}
                
                }
            if(flag==1){
                break;
            }           
            
        }        
        
        //reverse
        std::reverse(height.begin(), height.end());
//         for(int i=0;i<height.size();i++){
//             cout<<height[i];
//         }
//         cout<<endl;
        
//         cout<<"mark:"<<mark<<endl;        

        //begin_index=0;
        for(int i=0;i<height.size();i++){
            if(height[i]>0){
                begin_index=i;
                break;
            }    
        }
        
        //convex_length=0;
        //int flag=0;
        flag=0;
        for(int i=begin_index;i<height.size()-mark-1;i=i+1+convex_length){
            for(int j=i+1;j<height.size();){
                //cout<<i<<":"<<j<<endl;
                if(height[j]<height[i]){
                    j++;
                    if(j>=height.size()){
                        flag=1;
                    }
                }else{
                    convex_length=j-i-1;
                    //cout<<i<<":"<<j<<endl;
                    //cout<<convex_length<<endl;
                    int rain=min(height[i],height[j])*convex_length;
                    for(int x=i+1;x<j;x++){
                        rain=rain-height[x];
                    }
                    result=result+rain;
                    //rain_water.push_back(rain);
                    break;}
                
                }
            if(flag==1){
                break;
            }           
            
        }
            
        }    
        //add rain water togather
        // int result=0;
        // for(int i=0;i<rain_water.size();i++){
        //     result=result+rain_water[i];    
        // }
        
        return result;
          
    }
};
