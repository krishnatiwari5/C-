//in this we were going to solve some question on for loop
#include<iostream>
using namespace std;
int main(){
    bool flag=true;
    int i;
    // to print prime number between 1 to 100
    for(i=2;i<100;i++){
        for(int n=2;n<i;n++){
            if(i%n==0) {
            flag=false;
            break;
        }
       if(flag=true){
            cout<<i<<endl;
            }
        
        }
        
    } 
    
    return 0;
}