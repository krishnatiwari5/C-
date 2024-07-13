// FUNCTION OVERLOADING:-
// when two or more functions have same name but different parameters(arguments)
//then this is called function overloading
//FOR EXAMPLE:-
#include<iostream>
using namespace std;
void krishna(){
    cout<<"MY NAME IS KRISHNA..."<<endl;
     
}
int krishna(int weight){
    cout<<"THE WEIGHT OF KRISHNA IS..."<<weight<<"kg"<<endl;
    return weight;
}
void krishna (double height){
    cout<<"THE HEIGHT OF KRISHNA IS..."<<height<<"cm"<<endl;
    
}
int main(){
    cout<<"HELLO EVERYONE WHATSAPP, HOW ITS GOING..."<<endl;
    krishna();
    krishna(68);
    krishna(165.2);
    return 0;
}