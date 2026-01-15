#include<iostream>
using namespace std;

class person
{
  protected:
  string name;

  public:
  void introduce()
  {
    cout<<"my name is "<<" "<<name<<endl;
  }  
};
class employe: public person
{
    protected:
    int salary;

    public:
    void monthly()
    {
        cout<<"my salary is"<<" "<<salary<<endl;
    }
};
class manager: public employe
{
    public:
    string department;

    manager(string name ,int salary,string department)
    {
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
   void display()
   {
    cout<<name<<" "<<salary<<" "<<department<<endl;
   }
};
int main()
{
   manager a1("tirth",4554,"cse");
   a1.display();
   a1.monthly();
   a1.introduce();
}