/*
ARROW OPERATOR:-
arrow operator is used in case of pointer.pointer which is used to point out 
object of class in this case arrow(->)is used
*/

#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
 void setData(int a,int b){
     
     real=a;
     imaginary=b;
      }


 void getData(){
     cout<<"the real part of complex number is..."<<real<<endl;
     cout<<"the imaginary part of complex number is..."<<imaginary<<endl;
 }
     



};
int main(){
    //first method
    cout<<"FIRST METHOD"<<endl;
    complex c1;
    c1.setData(5,8);
    c1.getData();
    cout<<"\n";
    //second method using pointer
    cout<<"SECOND METHOD"<<endl;
    complex c2;
    complex *prt= &c2;
    (*prt).setData(10,4);
    (*prt).getData();
    cout<<"\n";
    //third method
    cout<<"THIRD METHOD"<<endl;
    complex *prt2= new complex();
    //class is user define datatype mindit(important) 
    (*prt2).setData(11,45);
    (*prt2).getData();
    cout<<endl;
    //example on arrow operator
    cout<<"example on arrow operator"<<endl;
    complex c3;
    complex *prt3=&c3;
    // (*prt3).setdata(7,89); is same as 
    prt3->setData(7,89);
    prt3->getData();
   cout<<"THANKYOU EVERYONE"<<endl;

    return 0;
}