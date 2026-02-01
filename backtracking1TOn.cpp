#include <iostream>
using namespace std;

void haa(int i , int n ){


    if(i < 1){

        return ;

    }
    haa(i - 1 , n );
    cout<< i << endl;
} 

int main(){

    haa(10 , 10);

    return 1 ;

}