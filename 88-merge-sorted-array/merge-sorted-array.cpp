class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        vector<int>temp(m+n,0);
        int i=0;
        int j=0;
        int idx=0;
        while(i<m&&j<n){
            if(num1[i]<num2[j]){
                temp[idx]=num1[i];
                idx++;
                i++;
            }
            else{
                temp[idx]=num2[j];
                idx++;
                j++;
            }
        }
        while(i<m){
            temp[idx]=num1[i];
            idx++;i++;
        }
        while(j<n){
            temp[idx]=num2[j];
            idx++;j++;
        }
        num1=temp;
        
    }
};