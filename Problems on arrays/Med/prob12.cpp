#include<bits/stdc++.h>
using namespace std;


vector<int> travesematrix(vector<vector<int>> &matrix, int n , int m){
  int left=0;int right=m-1;
  int top=0;int bottom=n-1;
vector<int> ans;

while(left<=right && top<=bottom){

  //right
  for(int i=left;i<=right;i++){
   ans.push_back(matrix[top][i]);
  }
  top++;

  //bottom
  for(int i=top;i<=bottom;i++){
   ans.push_back(matrix[i][right]);
  }
  right--;

if(top<=bottom){

  //left
  for(int i=right;i>=left;i--){
   ans.push_back(matrix[bottom][i]);
  }
  bottom--;
}

if(left<=right){

  //top
  for(int i=bottom;i>=top;i--){
   ans.push_back(matrix[i][left]);
  }
  left++;
}
}
 return ans;
}

int main(){

 vector <vector<int>> matrix={{1,2,3,4,5,6},{20,21,22,23,24,7},{19,32,33,34,25,8},{18,31,36,35,26,9},{17,30,29,28,27,10},{16,15,14,13,12,11}};
 int n=matrix.size();
 int m=matrix[0].size();

  cout << "AT first matrix was: "<<endl;
 for(auto it:matrix){
 for(auto st: it){
  cout<<st<<" ";
 }
 cout<<" "<<endl;
}
 
 vector<int>ans =travesematrix(matrix,n,m);


 cout << "The values of matrix are: "<<endl;

for(auto it:ans){
 cout<< it<<" ";
}

 return 0;
}