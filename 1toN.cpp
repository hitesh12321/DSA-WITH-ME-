#include <iostream>
using namespace std;


void printNumbers(int n , int endn) {

    if(n <= endn){
        cout<< n << endl ;
        n++ ;
        printNumbers(n , endn);
    }
}
int main(){
    printNumbers(1 , 10 );


return 0 ; 
}