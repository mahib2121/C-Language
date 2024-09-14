#include <iostream>
using namespace std ;


int main (){
    
  char a;
  cin >> a;
  if (a>='a'&&a<='z'){
    int y = a-32 ;
    char ans=y;
    cout <<ans<<endl;
  }
  else {
    int z= a+ 32 ;
    char ans = z;
    cout <<ans <<endl;
  }


   return 0;
}