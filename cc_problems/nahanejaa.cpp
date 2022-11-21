
// #include <iostream>
// using namespace std;

// // void solve(){
// //     long long int t; cin>>t;
// // 	while(t--){
// //         long long int n,k;
// //         cin>>n>>k;
// //         int cnt =1;
// //         long long int a[n];
// //         for(long long int i =0; i<k; i++){
// //              cin>>a[i];
// //         }
// //         if(n==1){
// //             if(a[0]==k){
// //              cout<<"YES"<<endl;
// //             }
// //             else
// //             {
// //                 cout<<"NO"<<endl;
// //             }
// //             continue;
// //         }
// //         for(long long int i = 0; i<n-1; i++){
// //             if(a[i]==k){
// //                 cnt = 0;
// //                 break;
// //             }
// //         }
// //         if(cnt == 0){
// //             cout<<"YES"<<endl;
// //         }
// //         else
// //         {
// //             cout<<"NO"<<endl;
// //         }
// //     }
// //     long long int t; cin>>t;
// // 	while(t--){
// //         long long int n,k;
// //         cin>>n>>k;
// //         int cnt =1;
// //         long long int a[n];
// //         for(long long int i =0; i<k; i++){
// //              cin>>a[i];
// //         }
// //         if(n==1){
// //             if(a[0]==k){
// //              cout<<"YES"<<endl;
// //             }
// //             else
// //             {
// //                 cout<<"NO"<<endl;
// //             }
// //             continue;
// //         }
// //         for(long long int i = 0; i<n-1; i++){
// //             if(a[i]==k){
// //                 cnt = 0;
// //                 break;
// //             }
// //         }
// //         if(cnt == 0){
// //             cout<<"YES"<<endl;
// //         }
// //         else
// //         {
// //             cout<<"NO"<<endl;
// //         }
// //     }
// // }

// int main() {
// 	// your code goes here
// 	long long int t; cin>>t;
// 	while(t--){
//         long long int n,k;
//         cin>>n>>k;
//         int cnt =1;
//         long long int a[n];
//         for(long long int i =0; i<k; i++){
//              cin>>a[i];
//         }
//         if(n==1){
//             if(a[0]==k){
//              cout<<"YES"<<endl;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//             }
//             continue;
//         }
//         for(long long int i = 0; i<n-1; i++){
//             if(a[i]==k){
//                 cnt = 0;
//                 break;
//             }
//         }
//         if(cnt == 0){
//             cout<<"YES"<<endl;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//         }
//     }
// 	return 0;
// }

#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    long long int n, k;
	    cin>>n>>k;
	    long long int a[n];
        int cnt=1;
	    for(long long int i=0; i<n; i++)
	    cin>>a[i];
	    if(n==1){
	        if(a[0]==k)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	   for(long long int i=0; i<n-1; i++)
	   if(a[i]==k){
	       cnt=0;
	       break;
	   }
	    if(cnt == 0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}