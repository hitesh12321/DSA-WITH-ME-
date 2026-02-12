#include <iostream>
#include <vector>
using namespace std;

void param(int a , int b , vector<int> ans , int sum  ){
    
       if(a == 0 && b == 0){
            for(int i = 0 ; i<a ; i++){
                ans.push_back(1);
            }
            for(int j = 0 ; j <ans.size() ; j++ ){
                int g = ans[j];
                if(g ==1){
                    cout<<"("<<" ";
                }else{
                    cout<< ")"<<" ";
                    
                }
            }
            cout<< endl;
            return ;
        }
        
        if(sum == 0){
            ans.push_back(1);
            sum += 1 ;
            a = a-1;
            param(a , b , ans, sum );
        }else {

    // branch 1 → place -1
    if(b > 0){
        vector<int> temp1 = ans;
        temp1.push_back(-1);
        param(a , b-1 , temp1 , sum-1);
    }

    // branch 2 → place +1
    if(a > 0){
        vector<int> temp2 = ans;
        temp2.push_back(1);
        param(a-1 , b , temp2 , sum+1);
    }
}

        
        
    
    
    
}
int main() {
	// your code goes here
	int n ;
	cin>> n ;
	vector<int> ans ;
	param(n , n , ans , 0 );
	
	return 0 ; 

}
