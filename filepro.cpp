#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream a;
    a.open("sample.txt");
    a<<"my name is krishnakumar tiwari..."<<endl;
    a.close();
    ifstream b;
    string s;
    b.open("sample.txt");
    b>>s;
    
    getline(b,s);
   cout<<s;
    return 0;
}