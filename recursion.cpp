#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;



// TO PRINT THE NAME N NO. OF TIMES
// rec(int i, int n){
//  if(i>n){
//   return 0;
//  }
//  cout<<"miku"<<endl;
//  rec(i+1,n);
// }



// TO PRINT THE NUMBER 1 TO N BUT IN REVERSE ORDER
// rec(int i,int n){
// if (i>n){
//  return 0;
// }
// cout<<n<<endl;
// rec(i,n-1);
// }

 //OR

// rec(int i){
// if (i<1){
//  return 0;
// }
// cout<<i<<endl;
// rec(i-1);
// }

/* BACKTRACKING METHOD -explained in sheets */

// rec(int i,int n){
//  if(i<1) return 0;
//  rec(i-1,n);
//  cout<<i<<endl;
// }

// rec(int i,int n){
//  if(n<1) return 0;
//  cout<<n<<endl;
//  rec(i,n-1);
// }


/* SUM OF N NO. OF TERMS */


//parameter-wise
// rec(int i , int sum){
//  if(i<1){
//   cout<<sum ;
//   return 0;
//  }
//  rec(i-1,sum+i);
// }

//OR

//Function-wise
// int rec(int i){
//  if(i==0) return 0;

//  return i+rec(i-1);
// }

/*FACTORIAL OF SUM */
// int rec(int i){
//  if(i==0 || i==1) return 1;

//  return i*rec(i-1);
// }


/*REVERSE OF AN ARRAY */
// rec(int i,int arr[],int n){
//  if(i>=n/2){
//   return 0;
//  }
//  swap(arr[i],arr[n-i-1]);
//  rec(i+1,arr,n);
// }

//OR USING DOUBLE PARAMETERS

// rec(int l,int arr[],int r){
//  if(l>=r) return 0;
//  swap(arr[l],arr[r]);
//  rec(l+1,arr,r-1);
// }

/* CHECK FOR THE STRING IS PALANDROME OR NOT */

bool f(int i , string &s){
 if(i>=s.size()/2) return true;
 if(s[i] != s[s.size()-i-1]) return false;
 return f(i+1,s);
}


/* FINONACCI SERIES / MULTIPLE RECURSION */

int f(int n){
 if(n<=1){
  return n;
 }
 int last=f(n-1);
 int sec_last=f(n-2);
 return last + sec_last;
}

int main(){

 /* for reverse of array */
 // int n;
 // cin>>n;
 // int arr[n];
 // for(int i=0;i<n;i++){
 //  cin >> arr[i];
 // }
 // rec(0,arr,n-1);
 // for(int i =0;i<n;i++){
 // cout<<arr[i]<<" ";
 // }


/*For string palindrome*/
 string s = "MADAM";
 cout << f(0,s);


// int n;
// cin>>n;
// cout<<f(n);
// return 0;

}