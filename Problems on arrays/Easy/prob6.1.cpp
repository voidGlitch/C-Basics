/*Left rotate by P places*/
#include<bits/stdc++.h>
using namespace std;



void reverse(int arr[],int start,int end){
 while(start<=end){
  int temp = arr[start];
  arr[start]=arr[end];
  arr[end]=temp;
  start++;
  end--;
 }
}

void left_rotate(int arr[],int d, int n){
 reverse(arr,0,d-1);
 reverse(arr,d,n-1);
 reverse(arr,0,n-1);
} 


int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
}
cout<<"your array is : ";
for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
}
cout<<endl<<"For how may places you want to shift? : ";
 int d;
 cin>>d;
 d=d%n;
 
left_rotate(arr,d,n);

cout<<endl<<"Array after shifting "<<d<<" places : "<<endl;

for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
}
 return 0;
}
//time complexity-0(2n)