#include<iostream>
using namespace std;

int main(){
    int a=40;
    int *p=&a;
    cout<<"HELLO EVERYONE WHATS GOING... "<<endl;
    cout<<"the address of a is..."<<&a<<endl;
    cout<<"the address of a is..."<<p<<endl;
    cout<<"the value of a is..."<<a<<endl;
    cout<<"the value of a is..."<<*p<<endl;
    int *b = new int(50);
    cout<<"the value at address b is "<<*(b)<<endl;
    cout<<"the address which b store is..."<<b;
    // we can also make array pointer using this new keyword
    int *arr= new int[6];
    arr[0]=10;
     arr[1]=20;//this can also be written like-->*(a+1)=20
      arr[2]=30;
       arr[3]=50; 
       arr[4]=80;
        arr[5]=70;
        cout<<"thr value at address a[0]"<<a[0]<<endl;
        cout<<"thr value at address a[1]"<<a[1]<<endl;

    return 0;
}