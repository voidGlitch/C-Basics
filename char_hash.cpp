#include<bits/stdc++.h>
using namespace std;


/*HASHING USING ARRAYS*/
// int main(){
//  string s;
//  cin>> s;

//  //PRE-COMPUTE
//  int hash[256]={0};
//  for (int i=0;i<s.size();i++){
//     hash[s[i]]++;
//  }
//  int q;
//  cin>>q;
//  while(q--){
//   char c;
//   cin>>c;
//   //FETCH
//   cout<<hash[c]<<endl;
//  }
//  return 0;
// }

/*HASHING USING CHARACTERS*/
int main(){
 int n;
 cin>>n;
 int arr[n];


 for(int i =0; i<n;i++){
  cin>>arr[i];
 }



 //PRE-COMPUTING
 map<int, int>mpp;
 for (int i=0;i<n;i++){
  mpp[arr[i]]++;

 }



 //iterate over map
 for(auto it: mpp){
  cout<<it.first<<"->"<<it.second;
 }

 //QUERIES TO FETCH
 int q;
 cin>>q;
 while(q--){
  int number;
  cin>>number;
  cout<<mpp[number]>>endl;
 }
return 0;
}