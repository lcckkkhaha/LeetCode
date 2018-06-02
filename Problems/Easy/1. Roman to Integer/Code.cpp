#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

class Solution {

public:
    int transform(string input){
        int output = 0;
        if(input.compare("I") == 0){
            output=I;
        }
        if(input.compare("V") == 0){
            output=V;
        }
        if(input.compare("X") == 0){
            output=X;
        }
        if(input.compare("L") == 0){
            output=L;
        }
        if(input.compare("C") == 0){
            output=C;
        }
        if(input.compare("D") == 0){
            output=D;
        }
        if(input.compare("M") == 0){
            output=M;
        }
        return output;
        
    }
    int romanToInt(string s) {
        int result = 0;
        string temps;
        for(int i=0;i<s.length();i++){
            if(transform(temps=s[i])<transform(temps=s[i+1])){
                result = result + transform(temps=s[i+1])-transform(temps=s[i]);
                i++;
            }else{
                result = result + transform(temps=s[i]);
            }            
        }
        //result = result + transform(temps=s[s.length()-1]);
        //cout<< transform("M") <<endl;
        return result;
    }
    
};
