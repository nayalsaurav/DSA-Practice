//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    long long power(long long a, long long b,long long m) {
    long long result = 1;
    for(int i=0;i<b;i++){
        result *=a;
        if(result>m) return result;
    }
    return result;
}
    int NthRoot(int n, int m) {
        int lo = 1;
        int hi = m;
        int ans = -1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            long long val = power(mid, n,m);

            if (val ==1LL* m) {
                ans = mid;
                break;
            } else if (val < 1LL*m) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends