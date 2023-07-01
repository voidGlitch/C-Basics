/*Majority of element*/
#include <bits/stdc++.h>
using namespace std;

int majority(vector<int> arr){
 int count=0;
 int el;
 for(int i=0;i<arr.size();i++){
  if(count == 0){
   count =1;
   el=arr[i];
 cout<<el<<endl;

  }
  else if(arr[i]==el){
   count++;
  }
  else{
   count--;
  }
 }

 //Now check the element is max or not
 int count1=0;
 for(int i=0;i<arr.size();i++){
  if(arr[i]==el){
   count1++;
  }
 }
 if(count1>=(arr.size()/2)){
  return el;
 }
 return -1;
}

int main(){
 vector<int>arr = {1,1,1,1,1,1,5,5,5,5,5,5,5,5,5,5,6,6,6,6};

 int max=majority(arr);
 cout<<"MAX ELEMENT IS  : "<<max;

 return 0;
}