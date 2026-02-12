// class Solution {
//     int kth(vector<int> & arr , int k , int n ){

//         if(n == 1 ){
//             return arr[k-1];
//             }
//             int p = arr.size();
//               vector<int> ans ;
//             for(int i = 0 ; i < p ;i++){
//                 if(arr[i] == 0 ){
//                     ans.push_back(0);
//                     ans.push_back(1);
//                 }else{
//                     ans.push_back(1);
//                     ans.push_back(0);
//                 }

//             }
//             return kth(ans, k, n-1);

//     }
// public:
//     int kthGrammar(int n, int k) {
//         vector<int> arr = {0};
//         int a = kth(arr , k , n );

//         return a ;

//     } 
// };