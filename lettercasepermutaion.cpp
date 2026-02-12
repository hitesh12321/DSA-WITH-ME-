#include <iostream>
using namespace std;

void perm(string &s , string ans , int i ){
    if(i == s.size() ){
        for(int j = 0 ; j < ans.size() ; j++){
            cout<< ans[j]<<" ";
        }
        cout<<endl;
        return ;
    }
    
        char c = s[i];
        if(isdigit(c)){
            ans.push_back(c);
            perm(s , ans , i+1 );
        }else{
        char j = tolower(c);
        ans.push_back(j);
        perm(s , ans , i+1 );
        ans.pop_back();
        char p = toupper(c);
        ans.push_back(p);
        perm(s , ans , i+1 );
        
        }

    
}

int main() {
	// your code goes 
	string s ;
	cin >> s;
	string a = "";
	perm(s , a , 0   );
	return 0 ; 
	
}
