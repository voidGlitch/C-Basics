#include <bits/stdc++.h>
using namespace std;
/* Recursion approach */

int rec_bubblesort(int n ,int arr[]){

 if(n==1) return 0 ; //HERE WE ARE ITERATING FROM N-1 TO  1;

 for (int j =0 ; j<=n-2;j++){
  if(arr[j]>arr[j+1]){
   int temp = arr[j+1];
   arr[j+1]= arr[j];
   arr[j] = temp;  
  }
 }
 rec_bubblesort(n-1,arr);

}

int rec_insertionsort(int n ,int i,int arr[]){
   if(n==i) return 0; //HERE WE ARE ITERATING FROM INT I =0 TO N-1
   int j = i;
   while(j>0 && arr[j-1]>arr[j]){
      swap(arr[j-1],arr[j]);
      j--;
   }
   rec_insertionsort(n,i+1,arr);
}

/*
ordinary approach
insertion_sort(int n,int arr[]){
   for (int i =0; i<=n-1;i++){
      int j = i;
      while(j>0 && arr[j-1]>arr[j] ){
         swap(arr[j],arr[j-1]);
         j--;
      }
   }
}

*/


/*
ordinary approach

bubble_sort(int n,int arr[]){
 for(int i=n-1;i>=1;i--){
  for(int j=0;j<=i-1;j++){
     if(arr[j]>arr[j+1]){
      swap(arr[j],arr[j+1]);
     }
  }
 }
}

*/


int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i=0;i<n;i++){
  cin>>arr[i];
 }

//  rec_insertionsort(n,0,arr);
// rec_bubblesort(n,arr);


 for(int i=0;i<n;i++){
  cout<<arr[i]<<"  ";
 }

}