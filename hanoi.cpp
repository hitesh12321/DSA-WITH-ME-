#include <iostream>
#include <stack>
using namespace std;

 void hanoi( int n , stack<int> &s , stack<int> &h , stack<int> &d ){
    
        if(n== 0 ){
            return ;
        }
        // s-> h 
        hanoi(n-1 , s , d , h);
        int a = s.top();
        s.pop();
        d.push(a);
        // h ->  d
        hanoi(n-1 , h , s , d);
    
}

int main() {
	// your code goes here
	stack<int> stk ;
	stk.push(4);
	stk.push(3);
	stk.push(2);
	stk.push(1);
		while(!stk.empty()){
	    cout<< stk.top() << " ";
	    stk.pop();
	}
	cout<< endl ;
	
	
		stk.push(4);
	stk.push(3);
	stk.push(2);
	stk.push(1);
	stack<int> h ;
	stack<int> d;
	hanoi(stk.size() , stk , h , d);
	
	while(!d.empty()){
	    cout<< d.top() << " ";
	    d.pop();
	}
	
	return 0 ; 
	

}
