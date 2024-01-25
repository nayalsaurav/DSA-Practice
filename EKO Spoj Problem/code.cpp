#include <iostream>
#include<algorithm>
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
  sort(arr,arr+N);//sort the array to create search space
  int start = 0;
  int end = arr[N-1];
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
