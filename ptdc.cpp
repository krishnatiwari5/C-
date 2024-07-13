//pointer to derived class means you can point on derived class object using base class pointer but when you
// call a funtion using base class pointer it only run function of base class
#include<iostream>
using namespace std;
class base{
    public:
    int var_base;
    void display(){
        cout<<"hello i am base class"<<var_base<<endl;
    }
    };
    class derived:public base{
        public:
        int var_derived;
        void display(){
            cout<<"hello i am derived class"<<var_derived<<endl;

        }
        void hello(){
            cout<<"hi namaste namskar..."<<endl;
        }
    };

int main(){
    base *base_ptr;
    derived *derived_ptr;
    base obj_base;
    derived obj_derived;
    base_ptr= &obj_derived;//base class pointer pointing towards object of derived class;
    base_ptr->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_ptr->display();

    base_ptr->var_base = 3400; 
   base_ptr->display();

    derived * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}
    
