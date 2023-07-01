#include<iostream>
using namespace std;

void print1(int n){
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   cout<<"* ";
  }
  cout<<endl;
 }
}

void print2(int n){
 for(int i=0;i<n;i++){
  for(int j=0;j<=i;j++){
   cout<<"* ";
  }
cout<<endl;
 }
 
}

void print3(int n){
for(int i=1;i<=n;i++){
 for(int j=1;j<=i;j++){
  cout<<j<<" ";
 }
 cout<<endl;
}
}

void print4(int n){
 for(int i=1; i<=n;i++){
  for(int j=1;j<=i;j++){
   cout<<i<<" ";
  }
  cout<<endl;
 }
}

void print5(int n){
 for(int i=1; i<=n;i++){ //Here I is no. of rows then formala becomes n-rows+1 i.e 3-1+1=3stars 3-2+1=2stars 3-3+1=1stars
 for(int j=0;j<n-i+1;j++){
  cout<<"* ";

 }
  cout<<endl;
 }
}


void print6(int n){
 for(int i=1; i<=n;i++){ //Here I is no. of rows then formala becomes n-rows+1 i.e 3-1+1=3stars 3-2+1=2stars 3-3+1=1stars
 for(int j=1;j<=n-i+1;j++){
  cout<<j<<" ";

 }
  cout<<endl;
 }
}

void print7(int n){
 for(int i=0;i<n;i++){  //Rows
   //For coloumn
   for (int j=0;j<n-i-1;j++){
    cout<< " "; //SPACE
   }

   for (int j=0;j< 2*i+1;j++){
    cout<< "*"; //STARS
   }

   for (int j=0;j<n-i-1;j++){
    cout<< " ";  //SPACE
   }
   cout<<endl;
  }
}


void print8(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int j=0;j< 2*n-(2*i+1);j++){  //Or we can also write 2*(n-i-1)+1
      cout<<"*";
    }
    for(int j=0;j<i;j++){
      cout<<" ";
    }
   cout<<endl;
  }
}

// void print9(int n){
//   //COMBINATION OF print8 & print9
// }

void print10(int n){
  for (int i =1; i<=2*n -1;i++){
    int stars =i;
    if(i>n){
      stars = 2*n-i;
    }
    for(int j=1;j<=stars;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

void print11(int n){
  int start =1;
  for (int i=0;i<n;i++){
    if(i % 2 == 0){
      start=0;
    } 
    else {
      start = 1;
    }
    for(int j=0;j<i;j++){
      cout<<start<<" ";
      start =1 - start; //FLIP THE 0 AND 1
    }
    cout<<endl;
  }
}

void print12(int n){
  int space = 2* (n-1);
  for (int i=1;i<=n;i++){
  //number
  for(int j=1;j<=i;j++){
    cout<<j;
  }

  //space
  for(int j=1;j<=space;j++){
    cout<<" ";
  }



  //number
  for(int j=i;j>=1;j--){
    cout<<j;
  }
  cout<<endl;
  space -= 2;

}
  
}

void print13(int n){
int num =1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num+=1;
    }
    cout<<endl;
  }
}

void print14(int n){
  for(int i =0;i<n;i++){
    for(char ch='A';ch<='A'+i;ch++){
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}

void print15(int n){
for(int i=0;i<n;i++){
  for(char ch='A';ch<='A'+(n-i-1);ch++){
    cout<<ch<<" ";
  }
  cout<<endl;
}

}

void print16(int n){
  for(int i=0;i<n;i++){
    char ch='A'+i;
    for(int j=0;j<=i;j++){
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}

void print17(int n){
  for(int i=0;i<n;i++){
    //Spaces
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }

    //Alphabet
    char ch='A';
    int breakpoint=(2*i+1)/2;
    for (int j=0;j<2*i+1;j++){
      cout<<ch;
      if(j<=breakpoint)
      {
        ch++;
      }
      else{
        ch--;
      }
    }




    //Spaces
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
  cout<<endl;
  }
}

void print18(int n){
for (int i =0; i<n;i++){
  for(char ch='E'-i;ch<='E';ch++){
    cout<<ch<<" ";
  }
  cout<<endl;
}
}

void print19(int n){
for(int i=0;i<n;i++){
  //STARS
  for(int j=1;j<=n-i;j++){
    cout << "*";
  }


  //Spaces
for (int j=0;j<2*i;j++){
  cout<< " ";
}


  //Stars
  for(int j=1;j<=n-i;j++){
    cout << "*";
  }

  cout<<endl;
}

}
void print19b(int n){
  for(int i =1;i<=n;i++){
    //Stars
    for(int j=1;j<=i;j++){
        cout<<"*";
    }


    //Spaces
    for(int j=1;j<=2*(n-i);j++){
      cout<<" ";
    }

    //Stars
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
  }
}

void print20(int n){
  for(int i =1;i<2*n;i++){
     //Stars
    int stars=i;
    if(i>n){
      stars=2*n-i;
    }
  for(int j=1;j<=stars;j++){
    cout<<"*";
  }

   //Spaces
   int spaces=2*(n-i);
    if(i>n){
      spaces=2*i-10;
    }
   for (int j =1;j<=spaces;j++)
{
  cout<<" ";
}
   //Stars
    for(int j=1;j<=stars;j++){
    cout<<"*";
  }

     cout<<endl;
  }
}

void print21(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

if (i==0 || j==0||j==n-1||i==n-1){
  cout<<"*";
}
else{
  cout<<' ';
}
    }
  cout<<endl;
  }
}

void print22(int n){
  for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
      int top=i;
      int left=j;
      int right=(2*n-2)-j;
      int bottom=(2*n-2)-i;

      cout<<(n- min(min(top,bottom),min(left,right)));
    }
    cout<<endl;
  }
}

void print23(int n){
  for(int i=0;i<n;i++){
    for (int j=0; j<n;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

int main(){
 int t;
 cin>>t; //THIS IS FOR NUMBER OF TEST CASES
 for(int n=0;n<t;n++){
  int x;
  cin>>x; //We give the input on basis of rows and column required
  cout<<endl;
  print23(x); //This how is the patterns configuration
  cout<<endl;
 }
 return 0;
}