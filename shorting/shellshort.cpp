#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,3,2,1};
    int gap;
    int n=5;
    for(gap=n/2;gap>=1;gap/2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap;i>=0;i-gap){
                if(arr[i+gap]>arr[i])
                {
                    break;
                }
                else
                {
                    swap(arr[i+gap],arr[i]);
                }
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    return 0;
}