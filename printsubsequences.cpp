// // #include <bits/stdc++.h>
// // using namespace std;

// // void subseq(vector<int> &arr , int i , vector<int> &ans){
// //        int n = arr.size();
// //         if(i == n  ){
// //             for (int x : ans) {
// //     cout << x << " ";
// // }
// // cout<<endl;
// // return;
// //         }
        
// //         ans.push_back(arr[i]);
     
// //         subseq(arr , i+1 , ans);
// //         ans.pop_back();
// //         subseq(arr , i+1 , ans);
        
        
    
// // }


// // int main() {
// // 	// your code goes here
	
	
// // 	vector<int> arr = {1 ,2 ,3 , 7 , 8 };
// // 	vector<int> ans ;
// // 	subseq(arr , 0 , ans);
// // 	return 0 ; 
	
	
	
	

// // }

// // //


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t ;
//     cin >> t ;
//     while(t--){
        
//             int n ;
//             cin >> n ;
//             vector<int> arr(n);
//             int tsum = 0 ;
//             for(int i = 0 ; i< n ; i++){
//                 cin >> arr[i];
//                 tsum += arr[i];
//             }
//             int psum = 0 ; 
//             string ans = "NO";
//             for(int i = 0 ; i< n ; i++){
                        
//         int pf = 0 ;
//                         if(i != 0 ){
//                             psum += arr[i-1];  
//                             pf = psum + (i*arr[i]);
//                         }
                        
//                         int af = (tsum - psum ) - ((n - i)*arr[i]);
                        
//                         if(pf== 0 && af == 0  ){
//                             ans = "YES";
//                             break; 
//                         }
                        
                        
                        
                        
                    
                
//             }
            
//             cout<< ans ;
            
        
        
//         cout<< endl ;
//     }
//     return 0 ; 

// }
