/*Majority element*/

#include<bits/stdc++.h>
using namespace std;

vector <int> brute(vector<int> &arr){
 int n = arr.size();
 vector <int> ls ;
 for(int i =0;i<n;i++){
  if(ls.size()==0 || ls[0] != arr[i]){
   int count = 0;
   for(int j =0;j<n;j++){
    if(arr[j]==arr[i]){
     count++;
    }
   }
    if(count>(int)(n/3)){
     ls.push_back(arr[i]);
    }
  }
    if(ls.size()==2) break;
   
  }
 return ls;
 }


vector<int> better (vector<int> &arr){
 int n =arr.size();
 int mini = (int)(n/3)+1;
vector<int> ls;
map<int,int> mpp;
for(int i =0;i<n;i++){
 mpp[arr[i]]++;
 if(mpp[arr[i]]==mini)
 {
  ls.push_back(arr[i]);
 }
 if(ls.size()==2) break;

}
sort(ls.begin(),ls.end());
return ls;
}


vector<int> optimal (vector<int> &arr){
 int n =arr.size();
 int cnt1=0;
 int cnt2=0;
 int el1=INT_MIN;
 int el2=INT_MIN;

 for(int i=0;i<n;i++){
  if(cnt1==0 && el2!=arr[i]){
   cnt1=1;
   el1=arr[i];
  }
  else if(cnt2==0 && el1!=arr[i]){
   cnt2=1;
   el2=arr[i];
  }
  else if(arr[i]==el1) cnt1++;
  else if(arr[i]==el2) cnt2++;
  else { 
  cnt1--;
  cnt2--;
  }
 }

 vector<int> ls;
 cnt1=0;cnt2=0;
 for(int i=0;i<n;i++){
  if(el1==arr[i]) cnt1++;
  if(el2==arr[i]) cnt2++;
 }
 int mini =(int)(n/3) +1;

 if(cnt1>=mini) ls.push_back(el1);
 if(cnt2>=mini) ls.push_back(el2);


sort(ls.begin(),ls.end());
return ls;
}



int main(){
vector<int> arr = {1,1,1,3,3,3,2,2};

vector<int> ans =  optimal(arr);
 for(int it:ans){
  cout<<it<<" ";
 }

 return 0;
}