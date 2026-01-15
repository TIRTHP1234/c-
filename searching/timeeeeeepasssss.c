#include<stdio.h>
int partion(int arr[],int start,int end)
{
    int pos=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end]){
            int temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
            pos++;
        }
    }
    return pos-1;
}
void quick(int arr[],int start,int end)
{
    if(start>=end)
    return;
    int pivot=partion(arr,start,end);
    quick(arr,start,pivot-1);
    quick(arr,pivot,end);
}
int main(){
    int arr[]={5,4,3,2,1};
    quick(arr,0,4);
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}