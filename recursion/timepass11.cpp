 #include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the aX^2 +bx+c cofisent:";
    cin>>a>>b>>c;
    float qu=(b*b) -(4*a*c);
    if(qu>=0){
        qu=sqrt(qu);
        float root1=(-b+qu)/(2*a);
          float root2=(-b-qu)/(2*a);  
          cout<<"x = "<<root1<<endl;
             cout<<"x = "<<root2<<endl;
    }else{
        qu*=-1;
        qu=sqrt(qu);
        float roota=(qu)/(2*a);
          float rootb=(-b)/(2*a);  
        cout<<rootb<<" + "<<roota<<"i"<<endl;
         cout<<rootb<<" - "<<roota<<"i"<<endl; 
    }

}