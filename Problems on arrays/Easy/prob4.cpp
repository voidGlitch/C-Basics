/* Removes Duplicates from an array */
#include<bits/stdc++.h>
using namespace std;



int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i =0;i<n;i++){
  cin>> arr[i];
 }

//Creating a set will automatically accept only unique and sorted elements
set <int> st;
for (int i=0;i<n;i++){
 st.insert(arr[i]);
}
//Now we need to put these element in starting of an array
int a[st.size()];
int index=0;
for(int it:st){
 a[index] = it;
 index++;
}


 for (int i =0;i<st.size();i++){
  cout<< a[i]<<" ";
 }


 return 0;
}
//TIME COMPLEXITY - 0(NlogN + N)