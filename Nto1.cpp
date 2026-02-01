#include <iostream>
using namespace std;
void Nto1(int n ){


    if(n >=0 ){

        cout<< n <<endl;
        n--;
        Nto1(n);
    }
}

int main(){


    Nto1(10);

    return 1 ;

}