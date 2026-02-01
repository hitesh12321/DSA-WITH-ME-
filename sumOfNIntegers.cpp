#include <iostream>
using namespace std;

int sumof(int n , int ans  ){
    
    if(n > 0 ){
        ans = ans + n;
        return  sumof(n-1 , ans );
    }
    return ans ;
}

int main() {
	// your code goes here
	
	int s = 0 ; 
    cout<< "Enter a number: " ;
    int n ;
    cin>> n ;

	
	s = sumof(n , s);
	cout<< s <<endl ;
	return s ;
	

}
