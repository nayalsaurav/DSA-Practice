//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        int k=0;
        map<long long,int>mp;
        long long sum=0;
        int ans = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                ans = max(ans,i+1);
            }
            
            int rem = sum-k;// sum - k as sum should be greater
            if(mp.find(rem)!=mp.end()){
                ans = max(ans,i-mp[rem]);
            }
            
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends