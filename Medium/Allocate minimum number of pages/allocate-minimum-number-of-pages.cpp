//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //predicate function
    bool isPossibleSolution(int A[],int N,int M,int sol){
        int count = 1;
        int noOfPages = 0;
        for(int i = 0;i<N;i++){
            if(A[i]>sol){
                return false;
            }
            if(noOfPages+A[i]>sol){
                count++;
                noOfPages=A[i];
                if(count>M){
                    return false;
                }
            }
            else{
                noOfPages +=A[i];
            }
        }
        return true;
        
    }
    //Function to find number of pages.
    int findPages(int A[], int N, int M) 
    {
        //Binary Search
        if(M>N){
            return -1;
        }
        
        // step 1: Search Space
        int start = 0;
        int end = accumulate(A,A+N,0);
        int mid = start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            //predicate function
            if(isPossibleSolution(A,N,M,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends