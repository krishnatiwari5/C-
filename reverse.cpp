#include<iostream>
using namespace std;
int main(){
    int n;
  int  lastdigit;
  int reverse =0;
cout<<"please enter your number ..."<<endl;
    cin>>n;
    while(n>0){
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<"Reverse of your number is :- "<<reverse<<endl;
    return 0;
}