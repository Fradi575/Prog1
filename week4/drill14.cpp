#include<iostream>
#include<string>

using namespace std;

class B1{
public:

virtual void pvf()=0;
virtual void vf(){cout<<"B1::vf()"<<endl;}
void f(){cout<<"B1::f()"<<endl;}

};

class D1 : public B1{
public:

void pvf() override {cout<<"D2::pvf()"<<endl;}
void vf() override {cout<<"D1::vf()"<<endl;}
void f() {cout<<"D1::f()"<<endl;}
};

class D2 : public D1{
public:

void pvf() override {cout<<"D2::pvf()"<<endl;}

};

class B2{
public:

virtual void pvf()=0;

};

class D21 : public B2{
public:

string valami = "Kész ez a drill is." ;
void pvf() override {cout<<valami<<endl;}

};

class D22 : public B2{
public:

int i = 2020;
void pvf() override {cout<<i<<endl;}
void f(B2& b) { b.pvf(); }

};



int main(){

/*B1 b1;
b1.vf();
b1.f();
b1.pvf();*/

D1 d1;
d1.vf();
d1.f();
d1.pvf();

B1& b=d1;
b.vf();
b.f();
b.pvf();

D2 d2;
d2.vf();
d2.f();
d2.pvf();

D21 d21;

D22 d22;
d22.f(d22);
d22.f(d21);

return 0;
}
