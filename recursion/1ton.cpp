#include<iostream>
using namespace std;
// void print(int num,int n){
//     if(num==n){
//         cout<<num;
//         return;
//     }
//     cout<<num;
//     print(num + 1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }
void print(int n){
    if(n==1){
        cout<<n;
        return;
    }
    print(n-1);
    cout<<n;
}
int main(){
    int n;
    cin>>n;
    print(n);
}
// void print(int n){
//     if(n==3){
//         cout<<3<<" ";
//         return;
//     }
//     print(n-3);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     if(n%3==1)
//     n++;
//     else
//     n++;
//     print(n);
// }