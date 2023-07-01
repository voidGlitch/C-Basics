/*Pascal triangle*/

#include<bits/stdc++.h>
using namespace std;

// int NCR(int row,int col){
// long long res =1;
// for(int i=0;i<col;i++){
//  res = res*(row-i);
//  res = res /(i+1);
// }
// return (int)(res);

// }


// vector<vector<int>> genPascalBrute(int n){
//  vector <vector<int>> ans;
// for(int row=1;row<=n;row++){
//    vector <int> templist;
//  for(int col=1;col<=row;col++){
//    templist.push_back(NCR(row-1,col-1));
//  }
//  ans.push_back(templist);
// }
// return ans;
// }

vector <int> genRow(int row){
 long long ans = 1;
 vector <int> ansRow;
 ansRow.push_back(1);
 for(int col =1;col<row;col++){
  ans = ans * (row-col);
  ans = ans / (col);
  ansRow.push_back(ans);
 }
 return ansRow;
}

vector<vector<int>> genPascalOptimal(int n){
 vector<vector<int>> ans;
 for(int i =1;i<=n;i++){
  vector<int> temp = genRow(i);
  ans.push_back(temp);
 }
 return ans;
}

int main(){
int n = 5;
 vector<vector<int>> pascal = genPascalOptimal(n);

 for(auto it: pascal){
  for(auto st: it){
   cout<<st<<" ";
  }
 cout<<" "<<endl;
 }

 
 

 return 0;
}