#include <bits/stdc++.h>
using namespace std;

/*HASHING USING MAP-STL*/
int main(){
 string s;
 cin>>s;
 
 //PRE -COMPUTE
 map<char,int>mpp;
 for (int i=0;i<s.size();i++){
  mpp[s[i]]++;
 }

 //QUERY
 int q;
 cin>>q;
 while(q--){
  char s;
  cin>>s;
  cout<<mpp[s]<<endl;
 }
 return 0;
}