//here we are going to creatining programe in which one base class name
//krishna and two derived class krishnavideo and krishnatext
#include<iostream>
#include<string>
using namespace std;
class krishna{
    protected:
    string title;
    float rating;
    public:
    krishna(string s, float r){
        title=s;
        rating=r;
    }
  virtual  void display (){

    }
};
class krishnavideo: public krishna{
public:

float vidlength;
krishnavideo(string s, float r,float v1 ): krishna(s,r){
    vidlength=v1;
}
void display(){
    cout<<"this is an amazing video with video:- "<<title<<endl;
    cout<<"Rating of this video is:- "<<rating<<" out of 5 star"<<
    endl;
    cout<<"Length of this video is:- "<<vidlength<<" minutes"<<endl;
}


};
class krishnatext: public krishna{
    public:
   int  wordcount;
   krishnatext(string s, float r, int wc):krishna(s,r){
       wordcount=wc;
       }
    void display(){
       cout<<"this is a fantastic text tutorial with title:- "<<title<<endl;
       cout<<"Rating of this text tutorial is:- "<<rating<<" out of 5 star"<<
       endl;
       cout<<"No. of words in this tutorial is:- "<<wordcount<<endl;
    }   
};

int main(){
    cout<<".....WELCOME TO VIRTUALFUNCTION EXAMPLE....."<<endl;
    string title;
    float vidlength,rating;
    int wordscount;
     krishna *tut[2];
    //for krishnavideo
    title="c++ introduction";
    rating=4.98;
    vidlength=10;
    cout<<"...WELCOME TO KRISHNAVIDEO..."<<endl;
    krishnavideo intro(title,rating,vidlength);
    
   tut[1]=&intro;
   tut[1]->display();
    // intro.display();
    cout<<endl;
    // for krishnatext
    cout<<"...WELCOME TO KRISHNATEXT..."<<endl;
    title="c++ text tutorial";
    rating=4.58;
    wordscount=5003;
    krishnatext introcpp(title,rating,wordscount); 
     tut[0]=&introcpp;
    tut[0]->display();
    // introcpp.display();
     
    
    
     


    
    return 0;
}