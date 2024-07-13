// in this tutorial we gone a learn about fstreambase, ifstream, ofstream
/*
a header name fstream contain three classes
1.fstreambase-->which is base class
2.ifstream-->derived class from fstreambase class
3.ofstream-->derived class from fstreambase class
there is two method to declare a objects in these class
1.by using constructor 
2.by using keywords like 'open()' , 'close()';
from file handling we can perforn mainly two operation:- read and write
**for read operation we use ifstream class
**for write operation we use ofstream class
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
// we are using constructor method
int main(){
    //write operation
    ofstream out("filea.cpp");
    string s="my name is krishna tiwari...";
    out<<s;
    //read operation
    ifstream in("filea.cpp");
    string s1;
    in>>s1;
    
    return 0;
}