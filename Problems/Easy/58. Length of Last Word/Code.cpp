class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty()){
            return 0;
        }
        
        int length = s.size();
        int result = 0;
        for(int i=0;i<length;i++){
            if(!(s.back()>64 && s.back()<91 || s.back()>60 && s.back()<123)){
                s.pop_back();
                if(result>0){
                    break;
                }
            }
            if(s.back()>64 && s.back()<91 || s.back()>60 && s.back()<123){
                cout<<s.back();
                s.pop_back();
                result++;
            }
            
            
        }
        
        return result;
    
    };
};
