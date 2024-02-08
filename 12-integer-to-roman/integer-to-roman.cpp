class Solution {
public:
    string intToRoman(int num) {
        string roman[13]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int values[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string ans="";
        for(int i=12;i>=0;i--){
            while(num>=values[i]){
                ans = ans+roman[i];
                num=num-values[i];
            }
        }
        return ans;
    }
};