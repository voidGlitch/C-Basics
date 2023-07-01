#include<bits/stdc++.h>
using namespace std;

/*HASHING USING map*/
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
  cout<<it.first<<"->"<<it.second<<endl;
 }

 //QUERIES TO FETCH
 int q;
 cin>>q;
 while(q--){
  int number;
  cin>>number;
  cout<<mpp[number]<<endl;
 }
return 0;
}