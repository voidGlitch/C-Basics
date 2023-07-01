/*MOVE ALL ZEROS AT THE END OF THE ARRAYS*/
#include<bits/stdc++.h>
using namespace std;

void zerosToEnd(int arr[],int n){
 int temp[n];
 int k =0;

 for(int i =0;i<n;i++){
  if(arr[i] != 0){
   temp[k]=arr[i];
   k++;
  }
 }

 while(k<n){
  temp[k]=0;
  k++;
 }

for(int i=0;i<n;i++){
 cout<<temp[i]<<" ";
}

}


int main(){
int n = 7;
int arr[]= { 1,2,0,5,0,6,0};

zerosToEnd(arr,n);



}

//time complexity-0(2n)