/*4 SUM PROBLEM*/
#include<bits/stdc++.h>
using namespace std;

int brute(vector<int> &arr){
 int n = arr.size();
 int length=0;
 for(int i=0;i<n;i++){
  int sum =0;
  for(int j =i;j<n;j++){
   sum += arr[j];
   if(sum == 0) length = max(length,j-i+1);
  }
 }
 return length;
}

int optimal(vector<int> &arr){
 int n =arr.size();
 unordered_map <int,int> mpp;
 int length=0;
 int sum=0;
 for(int i =0;i<n;i++){
  sum += arr[i];
  if(sum==0){
   length =i+1;
  }
  else{
   if(mpp.find(sum)!= mpp.end()){
    length = max(length,i - mpp[sum]);
   }
   else{
    mpp[sum] = i;
   }
  }
 }
 return length;
}

int main(){
 vector<int> arr = {1,-1,3,2,-2,-8,1,7,10,23};
 int length = optimal(arr);
 cout<<"Longest subarray with sum 0  is  : "<<length;
 return 0;
}