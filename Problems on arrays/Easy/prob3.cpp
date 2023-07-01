/*Check if the array is Sorted or not */
#include<bits/stdc++.h>
using namespace std;

int sorted(int arr[],int n){
 for (int i =0;i<n;i++)
 {
  if(arr[i]>=arr[i-1]) return 1;
  else return 0;
 }
 
}

int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i =0;i<n;i++){
  cin>> arr[i];
 }

bool s = sorted(arr,n);
cout<<s;

if(s==1){
 cout<<"Sorted";
}
if(s==0){
 cout<<"Not sorted";
}





 return 0;
}