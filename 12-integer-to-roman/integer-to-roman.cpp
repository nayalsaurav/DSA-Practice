class Solution {
public:
    string intToRoman(int num) {
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};//0 to 9
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};//10 to 90
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};//100 to 900
        string ths[]={"","M","MM","MMM"};//1000 to 3000
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};