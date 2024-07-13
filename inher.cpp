#include<iostream>
using namespace std;
class humans{
    public:
  void parts()
     {
    cout<<"humans have two legs"<<endl;
    cout<<"humans have two hands"<<endl;
    cout<<"humans have two eyes"<<endl;
    cout<<"humans have two ears"<<endl;

    }
   void clothes (){
  cout<<"pant "<<endl;
  cout<<"shirt "<<endl;
  cout<<"t-shirt"<<endl;
  
    }

};
class krishna : public humans{};


int main(){
    krishna k;
    k.clothes();
    k.parts();
    return 0;
}