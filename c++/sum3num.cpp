#include<iostream>
using namespace std;
class Addition
{
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter any two numbers";
        cin>>a>>b;
    }

    void calculate()
    {
        c=a+b;
    }

    void output()
    {
        cout<<"Sum="<<c<<endl;
    } 
};  

int main()
{
    Addition add;
    add.input();
    add.calculate();
    add.output();
    return 0;
}