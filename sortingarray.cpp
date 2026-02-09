#include <iostream>
#include <vector>

using namespace std;
void place(vector<int> &arr , int x ){
    int n = arr.size();
    if(n == 0 || arr[n-1] <= x){
        arr.push_back(x);
        return;
    }
    int a = arr[n-1];
    arr.pop_back();
    place(arr , x);
    arr.push_back(a);
}
void sorti(vector<int> &arr ){
    if(arr.size() == 1){
        return ;
    }
    int a = arr[arr.size()-1];
    arr.pop_back();
    sorti(arr);
    place(arr , a);
}
int main() {
    vector<int> arr = {5 , 4 , 3 , 2 , 1};
    sorti(arr);
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " " ;
    }

    return 0 ; 
}