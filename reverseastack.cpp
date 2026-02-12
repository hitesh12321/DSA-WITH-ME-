#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int> &stk , int a ){
    if(stk.empty() ){
        stk.push(a);
        return ;
    }

    int x = stk.top();
    stk.pop();
    insert(stk , a  );
    stk.push(x);
}
void reve(stack<int> &stk ){

    if(stk.empty() ){
        return ;
    }

    int a = stk.top();
    stk.pop();
        reve(stk);
        insert(stk, a);
}
int main(){

        stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);   
    stk.push(4);
    stk.push(5);
    stk.push(6);

    reve(stk);

    while (!stk.empty())
    {
        /* code */
        cout<< stk.top() << " ";
        stk.pop();
    }
    return 0  ;

}