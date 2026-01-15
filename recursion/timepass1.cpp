#include<iostream>
using namespace std;
int areais(int l)
{
    return l*l;
}
int areais(int l,int b)
{
    return l*b;
}
int areais(int a,int h,int b)
{
    return a*h*b;
}

int main()
{
    int choice;
    cout<<"enter choice"<<endl;
    cout<<"find area of square"<<endl;
    cout<<"find area of rectangle"<<endl;
    cout<<"find area of triangle"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        float lenght;
        cout<<"enter the lenght";
        cin>>lenght;
        cout<<"the lenght is "<<areais(lenght)<<endl;
        break;

        case 2:
        float lenghtt;float breath;
        cout<<"enter lenght and breath ";
        cin>>lenghtt>>breath;
        cout<<"the area of rectangle is"<<areais(lenghtt,breath)<<endl;
        break; 

    
        case 3:
        float hight;float breathh;
        cout<<"enter hight and breath";
        cin>>hight>>breathh;
        cout<<"the area of triangle is"<<areais(0.5,hight,breathh)<<endl;
        break; 
    }
}