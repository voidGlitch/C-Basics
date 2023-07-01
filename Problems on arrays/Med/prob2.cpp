/*Sort an array of 0's 1's and 2's*/
#include <bits/stdc++.h>
using namespace std;

int main(){
 int n = 11;
 int arr[n]={0,1,0,1,2,1,2,0,0,0,1};

 int low=0;
 int mid=0;
 int high=n-1;

 while(mid<=high){
  if(arr[mid]==0){
   swap(arr[mid],arr[low]);
   mid++;
   low++;
  }
  else if(arr[mid]==1){
   mid++;
  }
  else{
swap(arr[mid],arr[high]);
high--;
  }
 }
for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
}
 return 0;
}