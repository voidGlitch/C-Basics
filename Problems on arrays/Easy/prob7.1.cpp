/*MOVE ALL ZEROS AT THE END OF THE ARRAYS*/
#include<bits/stdc++.h>
using namespace std;

void zerosToEnd(int arr[],int n){
int j=-1;
for(int i=0;i<n;i++){
 if(arr[i]==0){
  j=i;
  break;
 }
}

for(int i=j+1;i<n;i++){
 if(arr[i]!=0)
 {
  swap(arr[i],arr[j]);
  j++;
 }
}

}


int main(){
int n = 7;
int arr[]= { 1,2,0,5,0,6,0};

zerosToEnd(arr,n);

for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
}

}

//time complexity-0(n)