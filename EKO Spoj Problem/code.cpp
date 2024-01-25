#include <iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
//predicate function
bool isPossibleSolution(int arr[], int n, int len, int mid) {
    //current wood we have after cutting
    int totalsum = 0;
    //checking if we cut all the wood would it we equal to required length.
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            totalsum += (arr[i] - mid);
        }
        if (totalsum >= len) {
            return true;
        }
    }
    return false;
}
int main() {
  int N,M;
  cin>>N>>M;
  int *arr = new int[N];
  for(int i = 0;i<N;i++){
  	cin>>arr[i];
  }
 
  int start = 0;
  int end = INT_MIN;
    for(int i = 0;i<N;i++){
        if(arr[i]>end){
           end = arr[i]; 
    }
    }
  int ans = -1;
  //apply binary search
  while(start<=end){
    int mid = start+(end-start)/2;
    //create predicate function
    if(isPossibleSolution(arr,N,M,mid)){
      ans = mid;
      start = mid+1;
    }
    else{
      end  = mid-1;
    }
  }
  cout<<ans<<endl;
  return 0;
}
