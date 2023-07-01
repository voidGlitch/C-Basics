/*4 SUM PROBLEM*/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> brute(vector<int> &arr){
 int n = arr.size();
 set<vector<int>> st;
 for (int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
   for(int k=j+1;k<n;k++){
    for(int l=k+1;l<n;l++){
     long long sum = arr[i]+arr[j];
     sum += arr[k];
     sum+= arr[l];
     if(sum == 0){
       vector<int> temp ={arr[i],arr[j],arr[k],arr[l]};
       sort(temp.begin(),temp.end());
       st.insert(temp);
     }
    }
   }
  }
 }
 vector<vector<int>>ans(st.begin(),st.end());
 return ans;

}

vector<vector<int>> better(vector<int> &arr){
int n = arr.size();
set<vector<int>> st;

for(int i =0;i<n;i++){
  for(int j =i+1;j<n;j++){
  set<long long> hashset;
    for(int k =j+1;k<n;k++){
       long long sum = arr[i]+arr[j];
       sum += arr[k];
       long long forth  = 0 - sum;
       if(hashset.find(forth) != hashset.end()){ //Means that if forth element is in the set
       
          vector<int> temp ={arr[i],arr[j],arr[k],(int)(forth)};
          sort(temp.begin(),temp.end());
          st.insert(temp);
}

hashset.insert(arr[k]);
}

}

}
 vector<vector<int>>ans(st.begin(),st.end());
 return ans;
}

vector<vector<int>> optimal(vector<int> &arr){
int n = arr.size();
 vector<vector<int>>ans;
 sort(arr.begin(),arr.end());

 for(int i =0;i<n;i++){
  if(i>0 && arr[i] == arr [ i-1] ) continue;
  for(int j = i+1;j<n;j++){
   if(j!= i+1 && arr[j] == arr [j-1] ) continue;
   int k = j+1;
   int l = n-1;
   while(l>k){
    long long sum = arr[i]+arr[j];
    sum+=arr[k];
    sum+=arr[l];
    
    if(sum<0){
     k++;
    }
    if(sum>0){
     l--;
    }
    else{
     vector <int> temp = {arr[i],arr[j],arr[k],arr[l]};
     sort(temp.begin(),temp.end());
     ans.push_back(temp);
     k++;
     l--;
     while(l>k && arr[k]==arr[k-1]) k++; 
     while(l>k && arr[l]==arr[l+1]) l--; 
    }
   }
  }
 }

 return ans;
}


int main(){
 vector<int> arr = {1,0,-1,0,-2,2};
 vector<vector<int>> ans= optimal(arr);
 for(auto it : ans){
  for(auto st:it){
   cout<<st<<" ";
  }
  cout<<endl;
 }
 return 0;
}