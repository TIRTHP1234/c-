#include<iostream>
using namespace std;

class area
{
    public:
   int calculatearea(int r)//circle
    {
        return 3.14*r*r;
    }
    int calculatearea(int l,int b)//rectangle
    {
        return l*b;
    }
};
int main()
{
    area a1;
    cout<<a1.calculatearea(9)<<endl;
    cout<<a1.calculatearea(4,5)<<endl;
}