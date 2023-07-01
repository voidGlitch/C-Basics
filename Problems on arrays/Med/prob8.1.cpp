#include<bits/stdc++.h>
using namespace std;

vector<int> printLeadersBruteForce(int arr[], int n) {

 vector <int> ans;
 int maxi = INT_MIN;
 for(int i =n-1;i>=0;i--){
  if(arr[i]>maxi){
   ans.push_back(arr[i]);
  }
  maxi=max(maxi,arr[i]);
 }
 sort(ans.begin(),ans.end());
 return ans;
}

int main() {
    
  // Array Initialization.
  int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeadersBruteForce(arr,n);
  
  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}