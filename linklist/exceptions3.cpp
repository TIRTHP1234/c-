#include<iostream>
using namespace std;


int main()
{
    try{
        int *p = new int[100];
        cout<<"memory allocation is successfull\n";
        delete []p;
    }
    catch(const exception &e)
    {
        cout<<"excaption occures: "<<e.what()<<endl;
    }
} 