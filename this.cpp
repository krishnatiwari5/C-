// this is a keyword which is a pointer which points to the object which invokes the member function
#include<iostream>
using namespace std;
class example{
int a;
public:
void setData(int a){
    this->a=a;//here 'this' keyword is used when we get same name of local and gobal programe
}

void getData(){
 cout<<"today's date is "<<a<<endl;
    cout<<"GOOD MORNING everyone.I am learning this keyword(pointer).THANKYOU SO MUCH "<<endl;
   
}
};
int main(){
    example e1;
    e1.setData(18);
    e1.getData();
return 0;
}