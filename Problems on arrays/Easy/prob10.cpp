/*Intersection of two array*/

//Brute force
 #include<bits/stdc++.h>
 using namespace std;



 int main(){
 vector<int> arr1={1,1,2,3,4,4,5,6,7,8};
 vector<int> arr2={2,3,4,4,5,6};
 vector<int> ans;

 int n1=arr1.size();
 int n2=arr2.size();
 int vis[n2]={0};

 for(int i=0;i<n1;i++){
  for(int j=0;j<n2;j++){
    if(arr1[i]==arr2[j] && vis[j]==0){
        ans.push_back(arr1[i]);
        vis[j]=1;
        break;
    }
    if(arr2[j]>arr1[i]) break;
  }
 }
 
for(auto it:ans){
 cout<<it<<" ";
}
  return 0;
 } 
 //TIME COMPLEXITY : 0(N1logN1)+0(N2logN2)+0(N1+N2)