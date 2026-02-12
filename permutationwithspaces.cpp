#include <iostream>

using namespace std;
void spac(string &s , string ans , int i){
        int n = s.size();
        if(i == n ){

            for(int k = 0 ; k < ans.size() ; k++){
                cout<< ans[k]<<" ";
            }
            cout << endl ; 
            return ;
        }
           ans.push_back(s[i]);
    spac(s , ans , i+1);
    ans.pop_back();   // backtrack

    // Choice 2: add "_" then character
    ans.push_back('_');
    ans.push_back(s[i]);
    spac(s , ans , i+1);
   
       
    
}

int main() {
	// your code goes here
	string s = "abc";
	string ans = "";
	ans += s[0];
	
	spac(s , ans , 1 );
	
	return 0 ;
	
	

}
