#include <iostream>
using namespace std;

 
  void prnt(int i ){
  

    if(i < 10 ){
        cout<< "Hello, World!  " << i << endl;
        i++;
        
        prnt(i);
    }
        
        
        
        
    }
int main(){
 int count = 0 ;
  
    prnt( count );




    return 1 ;
}
