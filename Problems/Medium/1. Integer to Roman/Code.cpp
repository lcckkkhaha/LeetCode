class Solution {
public:
    string transform(int input){
        string output;
        if(input == 1){
            output = "I";
        }
        if(input == 5){
            output = "V";
        }
        if(input == 10){
            output = "X";
        }
        if(input == 50){
            output = "L";
        }
        if(input == 100){
            output = "C";
        }
        if(input == 500){
            output = "D";
        }
        if(input == 1000){
            output = "M";
        }
        return output;
    }
    
    
    string intToRoman(int num) {
        string result;
        if(num>=1000){
            for(int i=0;i<num/1000;i++)
            {
                result.append(transform(1000));
            }
            num=num%1000;
        }
        if(num<1000 && num>=900){
            result.append(transform(100));
            result.append(transform(1000));
            num=num%900;
        }
        if(num<900 && num>=500){
            result.append(transform(500));
            num=num-500;
        }
        if(num<500 && num >=400){
            result.append(transform(100));
            result.append(transform(500));
            num=num-400;
        }
        if(num<400 && num >=100){
            for(int i=0;i<num/100;i++)
            {
                result.append(transform(100));
            }
            num=num%100;
        }
        if(num<100 && num>=90){
            result.append(transform(10));
            result.append(transform(100));
            num=num-90;
        }
        if(num<90 && num>=50){
            result.append(transform(50));
            num=num-50;
        }
        if(num<50 && num>=40){
            result.append(transform(10));
            result.append(transform(50));
            num=num-40;
        }
        if(num<40 && num>=10){
            for(int i=0;i<num/10;i++)
            {
                result.append(transform(10));
            }
            num=num%10;
        }
        if(num<10 && num>=9){
            result.append(transform(1));
            result.append(transform(10));
            //num=num-40;
        }
        if(num<9 && num>=5){
            result.append(transform(5));
            num=num-5;
        }
        if(num<5 && num>=4){
            result.append(transform(1));
            result.append(transform(5));
            num=num-4;
        }
        if(num<4 && num>=1){
            for(int i=0;i<num;i++)
            {
                result.append(transform(1));
            }
        }
        
        
        
        
        
        //cout<<911/900<<endl;
        
        return result;
    }
};
