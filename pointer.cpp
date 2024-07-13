// pointer is datatype which store the address of other datatype.
#include<iostream>
using namespace std;
int main(){
int a=5;
int *b=&a;//&-->is used for specify address of datatype
cout<<"the address of 'a' is..."<<&a<<endl;
cout<<"the address of 'a' is..."<<b<<endl;
cout<<"the value of 'a' is...."<<a<<endl;
cout<<"the value of 'a' is..."<<*b<<endl;//*-->is used to specify value of datatype
int **c=&b;//this is pointer to pointer datatype.
cout<<"the address of 'b' is ..."<<b<<endl;
cout<<"the address of 'b' is..."<<*c<<endl;
cout<<"the address of 'a' is..."<<*c<<endl;

cout<<"the value of c at the address of pointer b..."<<**c<<endl<<endl;
cout<<"\t\t\t\t\tTHANKYOU SO MUCH FOR WATCHING"<<endl;
}