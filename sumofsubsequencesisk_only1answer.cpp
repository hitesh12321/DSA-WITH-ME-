// #include <bits/stdc++.h>
// using namespace std;

//     bool P(vector<int> &main_arr , vector<int> &current_arr , int i , int sum , int k ){
        
//             int n = main_arr.size();
//             if(i == n ){
                
//                 if(sum == k){
//                     for(int j = 0 ; j< current_arr.size(); j++){
//                         cout << current_arr[j] << " ";
//                     }
//                     cout<< endl ;
                    
//                       return true;
//                 }
//                 return false;
                
//             }
            
//             int m = main_arr[i];
//             current_arr.push_back(m);
//             sum += m;
//             if( P(main_arr , current_arr , i + 1 , sum , k) == true){
//                 return true ;
//             }
           
//             current_arr.pop_back();
//             sum -= m ;
//              if( P(main_arr , current_arr , i + 1 , sum , k) == true){
//                 return true ;
//             }
            
//         return false ;
        
//     }

// int main() {
// 	// your code goes here
// 		vector<int> arr = {1 , 2 ,1};
// 	int k = 2;
// 	vector<int> ans;
// 	P(arr , ans , 0 , 0 , 2);
	
// 	return 0 ; 
	

// }
