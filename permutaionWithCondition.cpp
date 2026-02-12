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
        
        //toupper
        ans.push_back(s[i]);
        spac(s , ans , i+1);
        ans.pop_back();
        char p = toupper(s[i]);
        ans.push_back(p);
        spac(s, ans , i+1);
        
   
   
       
    
}

int main() {
	// your code goes here
	string s = "ab";
	string ans = "";
	
	
	spac(s , ans , 0 );
	
	return 0 ;
	
	

}
