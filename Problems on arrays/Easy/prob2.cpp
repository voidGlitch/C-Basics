/*Find the second largest number in the given array*/
#include<bits/stdc++.h>
using namespace std;

// void insertion_sort(int arr[],int n){
// for (int i =0 ;i<=n-1;i++){
// int j =i;
// while (j>0 && arr[j-1]>arr[j]){
//  swap(arr[j],arr[j-1]);
//  j--;
// }
// }
// }


int seclarge(int arr[],int n){
 int largest = arr[0];
 int slargest =INT_MIN;

 for (int i =1;i<n;i++){
  if(arr[i]>largest)
  {  //If arr[1] >arr[0] --> largest=arr[1] and slargest=largest(i.e arr[0]) 
   slargest=largest;
   largest = arr[i];
  }
  else if(arr[i]<largest && arr[i]>slargest)
  {  //IF by mistake any number which is not greater than largest but yes greater than slargest then it become slargest
   slargest=arr[i];
  }
 }
 return slargest;
 }


int secsmall(int arr[],int n){
 int smallest = arr[0];
 int ssmallest =INT_MAX;

 for (int i =1;i<n;i++){
  if(arr[i]<smallest)
  {  //If arr[1] < arr[0] --> smallest=arr[1] and slargest=largest(i.e arr[0]) 
   ssmallest=smallest;
   smallest = arr[i];
  }
  else if(arr[i] != smallest && arr[i]<ssmallest)
  {  //IF by mistake any number which is not greater than largest but yes greater than slargest then it become slargest
   ssmallest=arr[i];
  }
 }
 return ssmallest;
 }



int sec_smallest(int arr[], int n){
 int second_smallest= secsmall(arr,n);
return second_smallest;
}

int sec_largest(int arr[],int n){
 int second_largest= seclarge(arr,n);

 return second_largest;
}

int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i =0;i<n;i++){
  cin>> arr[i];
 }


/*Brute tc-->NlogN*/

//  insertion_sort(arr,n);  

// int largest = arr[n-1];
// int sec_largest = -1;
// for(int i = n-2;i>=0;i--){
//  if(arr[i]!=largest){
//   sec_largest=arr[i];
//   break;
//  }
// }


/*Better --> TC:2N */
// int largest = arr[0];
// for (int i =0 ;i<n;i++){
//  if(arr[i]>largest){
//   largest=arr[i];
//  }
// }
// int sec_largest=-1;
// for (int i =0;i<n;i++){
// if(arr[i]>sec_largest && arr[i]!=largest){
//  sec_largest=arr[i];
// }
// }

// cout<<"THE LARGEST ELEMENT IN THE ARRAY IS: "<<largest<<" "<<endl;
// cout<<"THE Second LARGEST ELEMENT IN THE ARRAY IS: "<<sec_largest<<" ";

/*Optimal solution*/
int secondlargest = seclarge(arr,n);
int secondsmallest = secsmall(arr,n);
cout<<"SECOND LARGEST ELEMENT OF THE ARRAY IS "<<secondlargest<<endl;
cout<<"SECOND SMALLEST ELEMENT OF THE ARRAY IS "<<secondsmallest<<endl;


 return 0;
}