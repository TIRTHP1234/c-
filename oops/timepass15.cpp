
#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,rem;
    cin>>num;
    while(num)
    {
      rem=num%10;
      rev=rev*10+rem;
      num/=10;
    }
    cout<<rev;
}