#include<iostream>
using namespace std;
int main(){
    char alphabet;
    cout<<"enter an alphabet: ";
    cin>>alphabet; 
    switch(alphabet){
        case 'a':
          cout<<"a is an vowel";
        break;
        case 'e':
          cout<<"e is an vowel";
        break;
        case 'i':
          cout<<"i is an vowel";
        break;
        case 'o':
          cout<<"o is an vowel";
        break;
        case 'u':
          cout<<"u is an vowel";
        break;
        default:
        cout<<"it is not an vowel";
        break;
    }
    return 0;
}