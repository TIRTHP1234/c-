#include<iostream>
using namespace std;
class student
{
    public:
    string name,section;
    int roll_no,reg;

    void setname(string t)
    {
        name=t;
    }
    void setsection(int aa)
    {
        section=aa;
    }
};
int main()
{
    student s1;
    // s1.name="tirth";
    // s1.section="genral";
    // s1.roll_no=290;
    // s1.reg=290;
    // cout<<s1.reg;
    s1.setname("trith");
    cout<<s1.name;
}