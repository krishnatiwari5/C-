/* FUNCTION OVERRIDING:-
when two or more function have same name and same parameters too then
 this situation is called function overriding.
 This cannot be done without inheritance.
 */
#include<iostream>
using namespace std;
class base{
    public:
    void print(){
        cout<<"my name is krishna(base)"<<endl;
    }
};
class derived:public base{
    public:
void print(){
cout<<"my name is krishna(derived)"<<endl;
}
};
int main(){
    cout<<"HELLO EVERYONE WHATSAPP, HOW ITS GOING..."<<endl;
    base b;
    derived d;
    b.print();
    d.print();
}