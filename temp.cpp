#include<iostream>
using namespace std;

// void doSomething(int arr[],int j){
//  arr[j]+=100;
//  cout<<"VALUES Inside function ARRAYS ARE:"<<arr[j]<<endl;
// }

int main(){
 // int n =5;
 // int arr[n];
 // for(int i=0;i<n;i++){
 //  cin>>arr[i];
 // }
 // for (int j=0;j<n;j++){
 // doSomething(arr,j);
 // }
 // cout<<"Take a break"<<endl;


 // for (int x=0;x<n;x++){
 //  cout<<"Values inside the MAIN FUNCTION IS :"<< arr[x]<<endl;
 // }

 // return 0;

 int q;
 cin>>q;
 int sum =0 ;
 while(q--){
  int number;
  cin>>number;
  sum=sum+number;
  cout<<"Chances of entry are"<<q<<endl;

 }
  cout<<"Sum are"<<sum<<endl;
return 0;

}



/*
Pass by reference

*/

/*
Functions

void add(int i,int j){
 int sum = i +j;
 cout << "The sum of 2 no" <<i << endl << j << endl <<"is "<<sum;
}

int main() {
int i,j;
cout<<"Enter two no.";
cin>>i>>j;
add(i,j);

*/

/*String

string str="D";
int len=str.length();
cout<<len;
cout<<str[len-1];

*/


/*2D array
int arr[3][5];
arr[0][2]=75;
cout<<arr[0][4];

*/


/* Array
//declare array
int arr[5];

cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

arr[3] += 3;

cout<<arr[3];


*/

/*For loop

for(int i=0;i<5;i++){
 cout<<"Hey buddy"<<endl;
}

*/

 // return 0;
// }