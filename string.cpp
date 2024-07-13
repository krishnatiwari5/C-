//#MOSTIMPORTANT
//in this tutorial we are going to learn some great thing about strings i.e
/*
different method to declare string and append to different strings
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
//     //declaration of string:- 1
//     string s;
//     s="my name is krishna tiwari...";
//     cout<<s<<endl;

//    // declaration of string:- 2
//     string s1("my name is krishna...");
//     cout<<s1;
    

//    // declaration of string:- 3
//     string s2(5,'k');
//     cout<<s2<<endl;
     
    //append means:-- add something at the end of written document
   // append of strings 1
    // string s3="kris";
    // string s4="hna";
    // s3.append(s4);
    // cout<<s3<<endl;

    //append of strings 2
    // string s5="tiw";
    // string s6="ari";
    // cout<<s5+s6<<endl;

    //to access any character of string
    // string s7="hello";
    // cout<<s7[4]<<endl;

    //how to compare two strings are equal or not :- 
    // string ss="krishna";
    // string sa="krishna";
    // we can compare two strings by using compare keywords
     // if both the strings are equal then output will come 0
    // cout<<ss.compare(sa)<<endl;
   
   //how to erase any character in the string :- we use erase keyword for that
   // syntax:- stringname.earse(index no. form where you have to delete keyword, no. of character to delete)
//    string a="nincompoop";//nincompoop means foolish people
//    a.erase(3,2);
//    cout<<a<<endl;

   //if we have to find any word or character in a string:- we use find keyword
//    string b="krishnakumar tiwari";
  
//    cout<< b.find("kum")<<endl;

   //if we have to insert any stream(word,character) we use insert keyword:-
   // syntax:- stingname.insert(index no. from where we have to insert, name of stream ())
    // string d="helloeveryone";
    // d.insert(4,"one" );
    // cout<<d<<endl;

    //how to find length or size of string
    // string f="jayshreekrishna";
    // cout<<f.length();
    //this is help when you want to iterate your string
    // for(int i=0;i<=f.length();i++)
    // cout<<f[i]<<endl;

    //if want substring(part of string) of any string then we use substr keyword:-
    // syntax:- stringname.substr(index no. starting of substring, index no. ending of substring)
    // string h="ganghinagar";
    // cout<< h.substr(3,5)<<endl;

    // if we have to convert any numeri string to interger then we use stoi function(keyword)
    // string j="420";
    // int x=stoi(j);
    // cout<<x+5<<endl;

    // if we have to convert interger to numeri string then we use function to_string
    //  int y=480;
    //  cout<<to_string(y) + "25"<<endl;

    //if we have sort any string  we use sort function which is present in algorithm header file
    //syntax :- sort(stringname.begin(), stringname.end())
    string k="tiwarikrishnakumar";
    sort(k.begin(), k.end());
    cout<<k<<endl;
    return 0;
}