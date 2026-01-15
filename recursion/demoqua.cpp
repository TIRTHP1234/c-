#include<iostream>
using namespace std;
// void fun3(int n)
// {
//     if(n==0){
//         cout<<"happy birthday";
//         return ;
//     }
//     cout<<n<<"days left for birthday\n";
//     fun3(n-1);
// }

// int main(){
//     int n;
//     fun3(3);
// }
void print (int n){
    if(n==1){
        cout<<1;
        return ;
    }
    cout<<n<<endl;
    print (n-1);
}
int main(){
    int n=5;
    print (5);
}