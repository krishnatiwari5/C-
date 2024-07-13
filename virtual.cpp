// virtual function is used to run program of that class in  which pointer store the object of particular class
#include<iostream>
using namespace std;
class base{
    public:
    int var_base=452;
   virtual void display(){
        cout<<"hello i am base class..."<<var_base<<endl;
    }
};
class derived:public base{
    public:
    int var_derived=741;
    void display(){
        cout<<"hello i am derived class..."<<var_derived<<endl;
    }

};
int main(){
    cout<<".....VIRTUAL FUNCTION....."<<endl;
    base *base_prt;
    derived *derived_prt;
    base obj_base;
    derived obj_derived;
    base_prt=&obj_derived;
    base_prt->display();
    
    return 0;
}