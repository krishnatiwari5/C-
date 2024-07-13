#include <iostream>
using namespace std;
 
class krishna{
   public:

   int a,b;

    krishna(int weight,int height): a(weight), b(height){
        cout<<"krishna is a fit boy"<<endl;
        cout <<"weight(kg) of krishna is  "<<a<<endl;
        cout<<"height(cm) of krishna is  "<<b<<endl;
    }
};
int main (){
    krishna(68,165);

    return 0;
}