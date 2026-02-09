#include<iostream>
#include<stack>
using namespace std;
void dlt(stack<int> &stk , int k ){

    if(k == 1){
        stk.pop();
        return ;
    }

    int a = stk.top();
    stk.pop();
    dlt(stk , k-1);
    stk.push(a);

}
int main(){
        stack<int> stk;
    stk.push(10);
    stk.push(2);
    stk.push(39);   
    stk.push(210);
    stk.push(1);
    stk.push(92);

    int n = stk.size();
    int  k = (n/2) + 1 ;
   

    dlt(stk , k);
    while(!stk.empty()){
        cout<< stk.top() << " ";
        stk.pop();
    }


    return 0 ; 
}