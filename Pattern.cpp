#include <iostream>
using namespace std;

// full pyramid

// main(){
//   int n;
//   cout<<"Enter No:";
//   cin>>n;
//   for(int i = 0;i<n;i++){
//     for(int j = 0;j<n;j++){
//        if(n-j-1>i){
//         cout<<" ";
//        }else{
//           cout<<" *";
//        }
//     }
//     cout<<endl;
//   }
// }

//  hollo triangle

// main(){
//   int n;
//   cout<<"Enter No:";
//   cin>>n;
//   for(int i = 0;i<n;i++){
//     for(int j = 0;j<n;j++){
//        if(n-j-1>i){
//         cout<<" ";
//        }else{
//           if(j==n-1 || i==n-1 || j+i==n-1){
//              cout<<" *";
//           }else{
//             cout<<"  ";
//           }
         
//        }
//     }
//     cout<<endl;
//   }
// }

main(){
  int n;
  cout<<"Enter No:";
  cin>>n;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
       if(n-j-1>i){
        cout<<" ";
       }else{
         if(j==n-1 || j+i==n-1){
             cout<<" *";
          }else{
            cout<<"  ";
          }
       }
    }
    cout<<endl;
  }
  for(int i = 0;i<n;i++){
    for(int j = n;j>0;j--){
       if(n-j<i){
        cout<<" ";
       }else{
           if(j==1 || j+i==n){
             cout<<" *";
          }else{
            cout<<"  ";
          }
       }
    }
    cout<<endl;
  }
}