// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int i=1;//while loop
//     while(i<=5){
//         sum+=i;
//         i++;
//         }
//         cout<<sum<<endl;
//     return 0;
// }
#include<iostream>

using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    // return 0;
}
