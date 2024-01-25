//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossibleSolution(vector<int>&stalls,int n,int k,long long sol){
        long long pos = stalls[0];//first cow 
        int count = 1;
        for(int i = 1;i<n;i++){
            if(stalls[i]-pos>=sol){
                count++;
                pos = stalls[i];
            }
            
        }
        return (count>=k);
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        long long start = 0;
        long long end =stalls[n-1];
        long long mid = start+(end-start)/2;
        long long ans = -1;
        while(start<=end){
            if(isPossibleSolution(stalls,n,k,mid)){
                ans = mid;
                start = mid+1;
            }
            else{
               end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends