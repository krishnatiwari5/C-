//inhertiance example
#include<iostream>
using namespace std;
class programmer {
    public:
    int id(int a){

        cout<<" your id is:- "<<endl;
        cout<<a<<endl;
    }
    int password(int b){
        cout<<" your login password is:- "<<endl;

        cout<<b<<endl;
    }
    char code(char c){
        cout<<"your code is:- "<<endl;
        cout<<c<<endl;
    }
    int languagecode(int d){
        cout<<"your langauagecode is:- "<<endl;
        cout<<d<<endl;
    }
};

/* syntax of ineritance 
class (name of derived class) : {{visibility mode}} {{name of base class}}
*/
class employee :public programmer
{
    public:
void name( string e){
    cout<<"your name is:- "<<endl;
    cout<<e<<endl;
}
void block_no(int f){
    cout<<"your block no. is :- "<<endl;
    
    cout<<f<<endl;
    
}
};

int main(){
    employee k;
    k.id(425);
    k.code(5);
    k.languagecode(3);
    k.password(94271);
    k.name("krishna");// when you write any string write in double inverted commas(double quatation)
                      //when you write any char value write in single inverted commas(single quatation)
    k.block_no(1);

    return 0;
}