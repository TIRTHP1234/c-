#include<iostream>
using namespace std;

class human
{
    protected:
    string name;
    int age;

    public:
    void work()
    {
        cout<<"i am working";
    }
};
class student : public human
{
    protected:
   int roll_no,fees;

   public:
   student(string name,int age,int roll_no,int fees)
   {
    this->name=name;
    this->age=age;
    this->roll_no=roll_no;
    this->fees=fees;
   }
   void display()
   {
   cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
   }
};
int main()
{
  student a1("adeshahsa",45,290,99);
  a1.display();
  a1.work();
}