#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
        cout<<"counster"<<endl;
    }
    ~demo()
    {
      cout<<"distractor"<<endl;
    }
};
int main()
{
  demo a;
}