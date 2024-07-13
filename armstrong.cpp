/* 
ARMSTRONG NUMBER is number in which if we add cube of digit of a number
we get that number only.
FOR EXAMPLE:-
153 IS ARMSTRONG NUMBER;
1^3+5^3+3^3===153.
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Please enter your number ..."<<endl;
     cin>>n;
  int originalnumber=n;
  int lastdigit;
  int sum=0;
  while(n>0){
      lastdigit=n%10;
      sum+=pow(lastdigit,3);
      n=n/10;

  }
  if(originalnumber==sum){
      cout<<originalnumber<<" is ARMSTRONG NUMBER "<<endl;

  }
  else{
      cout<<originalnumber<<" is not a ARMSTRONG NUMBER"<<endl;
  }
    return 0;
}