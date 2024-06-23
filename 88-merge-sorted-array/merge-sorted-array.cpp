class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int i=0;
        int j=0;

        while (i < m && j < n){
            if(num1[i]<num2[j]){
                i++;
            }
            else{
                int t = num1[i];
                num1[i]=num2[j];
                num2[j]=t;
                // swap(num1[i],num2[j]);
                i++;
                sort(num2.begin(),num2.end());
            }
        }

        while(j<n){
            num1[i]=num2[j];
            i++;
            j++;
        }
    }
};