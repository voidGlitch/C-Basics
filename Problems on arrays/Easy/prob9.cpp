/*Find union of two arrays*/
//Brute force
 #include<bits/stdc++.h>
 using namespace std;



 int main(){
 vector<int> arr1={1,1,5,4,2,3};
 vector<int> arr2={2,1,4,5,6,7};
 set <int> st;
 for(int i =0;i<arr1.size();i++){
  st.insert(arr1[i]);
 }
 for(int i =0;i<arr2.size();i++){
  st.insert(arr2[i]);
 }

int un[st.size()];
int index=0;
for( auto it:st){
 un[index]=it;
 index++;
}

for(auto it:un){
 cout<<it<<" ";
}
  return 0;
 } 
 //TIME COMPLEXITY : 0(N1logN1)+0(N2logN2)+0(N1+N2)