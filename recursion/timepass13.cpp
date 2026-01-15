#include<iostream>
using namespace std;
class gamer{
    public:
    string game;
    void work()
    {
        cout<<"i am working";
    }
};
class position{
    public:
    string which;
    void work1()
    {
        cout<<"ia m working also";
    }
};
class kd:public gamer,public position{
    public:
    int kdratio;

    kd(string game,string which,int kdratio){
        this->game=game;
        this->which=which;
        this->kdratio=kdratio;
       }
       void display(){
        cout<<game<<" "<<which<<" "<<kdratio<<endl;
    }
};
int main()
{
    string game;
    string which;
    int kdratio;
    cout<<"enter game";
    cin>>game;
    cout<<"enter which";
    cin>>which;
    cout<<"enter kd";
    cin>>kdratio;

    kd a1(game,which,kdratio);
    a1.display();
}
