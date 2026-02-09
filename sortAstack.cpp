#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int> &stk, int a){
        if(stk.empty() || stk.top() <= a){

            stk.push(a);
            return ;
        }
        int  x = stk.top();
        stk.pop();
        insert(stk , a);
        stk.push(x);



}
void sorte(stack<int> &stk ){

    if(stk.empty()){
        return ;

}
int a = stk.top();
stk.pop();
sorte(stk);
insert(stk,a);


}

int main(){
    stack<int> stk;
    stk.push(10);
    stk.push(2);
    stk.push(39);   
    stk.push(210);
    stk.push(1);
    stk.push(92);

    sorte(stk);

    while(!stk.empty()){
        cout << stk.top() << " " ;
        stk.pop();
    }
    return 0 ; 


}