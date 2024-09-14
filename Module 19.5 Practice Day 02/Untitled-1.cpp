#include<iostream>
#include <iomanip>
using namespace std ;

int main (){
    

    float x;
    float p;
    cin >> x>> p ;
    
    float OGP = p/(1-x/100);
    cout <<fixed <<setprecision(2)<<OGP<<endl;
    return 0;
}
