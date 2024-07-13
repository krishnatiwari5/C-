/*
inisilization list in cpp is nothing but this is like a shortcut to make
 constructor and to give value to it,this whole thing can done in single line
 SYNTAX OF INISILIZATION LIST :-
 constructor (argument list): inisilization section  {
     assignment+other code;
 }
 */
#include<iostream>
using namespace std;
class test{
    int a,b;
    public:
    test (int i,int j): a(i) , b(j){
        cout<<"constructor is excecuted..."<<endl;
        cout<<"the value of a is ..."<<i<<endl;
        cout<<"the value of b is ..."<<j<<endl;
        cout<<"GOOD BYE EVERYONE...."<<endl;
    }

};
int main(){
    test(6,8);
   
        return 0;
}