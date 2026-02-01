#include <iostream>
using namespace std;

void hmm(int i , int n ){

    if(i > n){
        return ;
    }
    hmm(i + 1 , n);
    cout<< i << endl ;
}


int main(){


    hmm(1 , 5);
    return 9 ;
}