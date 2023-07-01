/*4 SUM PROBLEM*/
#include<bits/stdc++.h>
using namespace std;

int brute(vector<int> &arr,int k ){
 int n =arr.size();
 int count =0;
 for(int i=0;i<n;i++){
  for(int j =i;j<n;j++){
   int XOR = 0;
   for (int k =i;k<=j;k++){
    XOR= XOR ^ arr[k];
    if(XOR == k) count++;
   }
  }
 }
return count;
}
//TC->0(N^3)

int better(vector<int> &arr,int k ){
 int n =arr.size();
 int count =0;
 for(int i=0;i<n;i++){
   int XOR = 0;
  for(int j =i;j<n;j++){
 
    XOR= XOR ^ arr[j];
    if(XOR == k) count++;

  }
 }
return count;
}
//TC->0(N^2)

int optimal(vector<int> &arr,int k ){
 int n =arr.size();
 int xorr=0;
 map<int,int>mpp;
 mpp[xorr]++;
 int count =0;
 for(int i=0;i<n;i++){
  xorr =xorr^arr[i];
  int x = xorr^k;
  count += mpp[x];
  mpp[x]++;

 }
return count;
}


int main(){
 vector<int> arr = {4,2,2,6,4};
 int k =6;
 int length = optimal(arr,k);
 cout<<"count of subarray with XOR as " <<k <<" is  : " <<length;
 return 0;
}