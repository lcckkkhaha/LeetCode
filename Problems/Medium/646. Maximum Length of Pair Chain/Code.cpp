class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        if (pairs.size() == 0) return 0;
        int count=0;
        int result=0;
        
        
        //sort(pairs.begin(),pairs.end());
        sort(pairs.begin(), pairs.end(), cmp);
        //print sorted chain
        // for(int i=0;i<pairs.size();i++){
        //    cout<<"["<<pairs[i][0]<<","<<pairs[i][1]<<"]"<<",";   
        // }
        // cout<<endl;
        
        
        for(int k=0;k<pairs.size();k++){
            cout<<"["<<pairs[k][0]<<","<<pairs[k][1]<<"]"<<",";
            bool flag=false;
            for(int i=k;i<pairs.size();){
                 
                for(int j=i;j<pairs.size();j++){
                    if(pairs[i][1]<pairs[j][0]){
                        count++;
                        i=j;
                        flag=true;
                        //cout<<"j:"<<j<<"["<<pairs[j][0]<<","<<pairs[j][1]<<"]"<<","; 
                        break;
                    }
                }
                
                if(flag==false){
                    i++;
                }
                flag=false;


            }
            //cout<<endl;
            if(count>result){
                result=count;
            }
            count=0;
        }

        
        
        
        return result+1;
        
    }
    
    
    
    static bool cmp(vector<int>& a, vector<int>&b) {
        return a[1] < b[1] || a[1] == b[1] && a[0] < b[0];
    }
};
