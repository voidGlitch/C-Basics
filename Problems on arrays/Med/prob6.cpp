/*Rearrange element by sign*/
#include <bits/stdc++.h>
using namespace std;

int main()
{int n=6;
 int arr[n]={3,1,-2,-5,2,-4};
 int ans[n];
 int posIndex=0;
 int negIndex=1;
 for(int i =0;i<n;i++){
  if(arr[i]>0){
   ans[posIndex]=arr[i];
   posIndex = posIndex+2;
  }
  else{
   ans[negIndex]=arr[i];
   negIndex=negIndex+2;
  }
 }
    for(int i=0;i<n;i++){
     cout<<ans[i]<<" ";
    }
}
