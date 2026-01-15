// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter a numner: ";
//     cin>>a;
//     if(a%2==0){
//         cout<<"even number";
//     }
//     else cout<<"odd number";
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a numner: ";
    cin>>a;
    int result=0;
    for(int i=1;i<=a;i++){
        if(i%2==0){
            result-=i;
        }
        else {
            result+=i;
        }
    }
    cout<<result;
    return 0;
}