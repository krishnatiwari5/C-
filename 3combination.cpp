/*
in this programme we will going to do three different types of problems 
1. leap year
2. prime number
3. print number in a paticular intervals; 
*/
#include<iostream>
using namespace std;
void leapyear(void)
{
    cout<<"please enter the year ..."<<endl;
    int year;
    cin>>year;
    if(year%400==0 || year%4==0 && year%100!=0){
        cout<<year<<"  ...is leap year."<<endl;
    }
    else{
        cout<<year<<"  ... not a leap year."<<endl;
    }
    
}

int prime(void){
    cout<<"enter your number .."<<endl;
    int number;
    cin>>number;
    for(int i=2;i<number;i++){
        if(number%i==0){
            cout<<number<<"  .. is not prime number"<<endl;
        
        }
        else {
            cout<<number<<"   ..is prime numbeer"<<endl;
            
        }
    }
    return number;
}

void interval(void)
{
    
    cout<<"please enter the intervals...."<<endl;
    int a,b;
    cin>>a;
    cout<<" to "<<endl;
    cin>>b;
    for(int i=a;i<=b;i++){
        cout<<"  "<<i;
    }
    
}
int main(){
    leapyear();
    prime();
    interval();

}