#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int sum=0,avg;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    avg=sum/5;
    cout<<avg;
}