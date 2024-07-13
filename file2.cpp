#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
cout<<"THIS IS FILE HANDLING..."<<endl;
ofstream kri;
kri.open("fileb.cpp");
kri<<"HELLO EVERYONE HOW ARE YOU WHATAPPS EVERYTHING IS GOOD"<<endl;
kri.close();
ifstream kris;
kris.open("filea.cpp");
string st;
kris>>st;
kris.close();
    return 0;
}
