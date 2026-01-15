#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,disc,deno;
    float root1,root2;
    cout<<"enter the coefficient";
    cin>>a>>b>>c;
    disc=b*b-4*a*c;
    deno=2*a;
    if(disc>0)
    {
        root1=(-b+sqrt(disc))/deno;
        root2=(-b-sqrt(disc))/deno;
        cout<<"root1 "<<root1<<endl;
        cout<<"root2 "<<root2<<endl;
    }
    else if(disc==0)
    {
        root1=-b/deno;
        root2=root1;
        cout<<"root1 "<<root1<<endl;
        cout<<"root2 "<<root2<<endl;
    }
    else{

    }
}