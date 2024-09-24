#include<iostream>
using namespace std;

class A{
protected:
    int a;
public:
    A(){
        a = 1;
    }
    void Aa()
    {
        cout<<"Aa for a "<<a<<endl;
    }
};

class B : public A{
protected:
    int b;
public:
    B(){
        b = 2;
    }
    void Aa(){
        cout<<"Aa for b overridden "<<b<<endl;
    }
    void Bb()
    {
        cout<<"Bb for b "<<2*b<<endl;
    }
};

class C : public A{
protected:
    int c;
public:
    C(){
        c = 3;
    }
    void Cc()
    {
        cout<<"Cc for c "<<3*c<<endl;
    }
};

class D : public B, public C{
protected:
    int d;
public:
    D(){
        d = 4;
    }
    void Bb()
    {
        cout<<"Bb for d overridden "<<B::a*b*c<<endl;
    }
};

int main()
{   
    A A1;
    B B1;
    C C1;
    D D1;
    A1.Aa();
    B1.Aa();
    B1.Bb();
    C1.Cc();
    D1.Bb();
    return 0;
}