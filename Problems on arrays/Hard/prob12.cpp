#include<bits/stdc++.h>
using namespace std;

int brute(vector<int> &arr,int n){
 int maxi =INT_MIN;
 for(int i =0;i<n;i++){
  int product =1;
  for(int j=i;j<n;j++){
   product = product * arr[j];
  maxi = max(maxi,product);
  }
 }
 return maxi;
}

int optimal(vector<int>&arr,int n){
 int maxi = INT_MIN;
 int pre =1;
 int suf =1;
 for(int i =0;i<n;i++){
  if(pre==0) pre=1;
  if(suf==0) suf=1;
  pre =pre*arr[i];
  suf = suf*arr[n-i-1];
  int maximum = max(pre,suf);
  maxi = max(maxi,maximum);
 }
 return maxi;
}

int main(){
 vector<int> arr = {2,3,-2,4};
 int length = brute(arr,arr.size());
 cout<<" Maximum product of subaaray is : "<<length;
 return 0;
}