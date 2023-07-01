/*Intersection of two array*/

//OPTIMAL
 #include<bits/stdc++.h>
 using namespace std;

vector<int> intersection(vector<int> &a,vector<int> &b,int n1,int n2){
 vector<int> ans;
 int i =0;
 int j=0;
 while(i<n1 && j <n2){
  if(a[i]<b[j]){
   i++;
  }
  else if (b[j]<a[i]){
   j++;
  }
  else{
   ans.push_back(a[i]);
   i++;
   j++;
  }
 }
 return ans;
}


 int main(){
 vector<int> arr1={1,1,2,3,4,4,5,6,7,8};
 vector<int> arr2={2,3,4,4,5,6};

 int n1=arr1.size();
 int n2=arr2.size();

vector<int> ans = intersection(arr1,arr2,n1,n2);
 
for(auto it:ans){
 cout<<it<<" ";
}
  return 0;
 } 
 //TIME COMPLEXITY : 0(N1+N2)