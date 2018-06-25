class Solution {
public:
//     long factorial(long number)  
//     {   if(number<=1)  
//             return 1;  
//         else   
//             return number*factorial(number-1);  
//     }  

//     int combinator(int n,int m)  
//     {   int temp;  
//         if(n<m)  
//         {   temp=n;  
//             n=m;  
//             m=temp;}  
//         return factorial(n)/(factorial(m)*factorial(n-m));  
//     } 
    
    
    
    void split(string& s, string& delim, vector<string>* ret)
    {
        size_t last = 0;
        size_t index=s.find_first_of(delim,last);
        while (index!=string::npos)
        {
            ret->push_back(s.substr(last,index-last));
            last=index+1;
            index=s.find_first_of(delim,last);
        }
        if (index-last>0)
        {
            ret->push_back(s.substr(last,index-last));
        }
    }

    bool checkIP(string tempIP)
    {
        vector<string> str;
        string delim = ".";
        split(tempIP,delim,&str);//分割字符串
        if(str.size()!= 4)
        {
            return false;
        }
        else
        {
            for(vector<string>::iterator iter = str.begin(); iter!=str.end(); ++iter)
            {
                int transInt=0;
                string tt = "";
                tt.assign(*iter);
                stringstream ss;
                ss<<(*iter);
                ss>>transInt;
                //cout<<tt.size()<<endl;
                if(transInt<0||transInt>255 || (tt.size()>1 && tt[0]=='0') ) //判断是否是合法的数字
                {
                    return false;
                }
            }
            return true;
        }
    }
    
    
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        int length =  s.size();
        string temp = "";
        temp.assign(s);
        //cout<<temp;
        //for(int i=0;i<combinator(3,length);i++){
        
        if(length<4 || length>12){
            return result;
        }
            
            for(int a=1;a<length;a++){

                for(int b=a+2;b<length+1;b++){
                    if(b>a+4){
                            break;
                        }

                    for(int c=b+2;c<length+2;c++){
                        if(c>b+4){
                            break;
                        }
                        temp.insert(temp.begin()+a,'.');
                        temp.insert(temp.begin()+b,'.');
                        temp.insert(temp.begin()+c,'.');
                        if(checkIP(temp)){

                            //result1.push_back(*it);
                            result.push_back(temp);
                        }       
                        //result.push_back(temp);
                        temp.clear();
                        temp.assign(s);
                    }
                }
            }
            
        //}
//         vector<string> result1;

//         for(vector<string>::iterator it = result.begin(); it != result.end(); ++it) {
//             cout<<*it<<endl;
//             if(checkIP(*it)){

//                 result1.push_back(*it);
//             }
            
//         }
        

        
        
        
        
        return result;
        
    }
};
