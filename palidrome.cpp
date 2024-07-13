/*
palidrome number is a number in which reverse of a number is true
FOR EXAMPLE:-
16461===16461
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please enter the number ..."<<endl;
    cin>>n;
    int lastdigit;
   int originalnumber=n;
    int reverse=0;
    while(n>0){
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
        
    }
    if(originalnumber==reverse){
        cout<<"your number is palidrome ..."<<endl;
    }
    else{
        cout<<"your number is not palidrome ..."<<endl;
    }
    return 0;
}