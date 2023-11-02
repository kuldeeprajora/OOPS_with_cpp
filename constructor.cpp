#include<iostream>
using namespace std;
class person{
    private:
    int *p;
    public:
    person();
    ~person();
    void show();
};
person::person(){
    cout<<"Constructor called"<<endl;
    p=new int;
    *p=30;
}
void person :: show(){
    cout<<*p<<endl;
}
person::~person(){
    cout<<"Destructor called"<<endl;
    delete(p);
}
void fun(){
    person per1;
    per1.show();

}
int main(){
    fun();
    return 0;
}