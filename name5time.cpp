#include <iostream>
using namespace std;

void nae(int count  , string name ){

    if(count < 5){
        cout<< name << endl ;
        count++ ;
        nae(count , name);
    }
}
int main(){

    nae(0, "Alice");

    return 1 ;
}