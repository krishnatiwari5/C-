#include<iostream>
using namespace std;
class shopItem{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id=a;
        price=b;
    }
    void getData(){
        
        cout<<"code of this item is..."<<id<<endl;
        cout<<"price of this item is..."<<price<<endl;
    }
};
int main(){
    int size=3;
    shopItem *ptr=new shopItem[size];
    shopItem *prtTemp=ptr;
    int a,i;
    float b;
   
    for(i=0;i<size;i++){
        cout<<"please enter id  of the item no."<<i+1<<endl;
        cin>>a;
        cout<<"please enter price of the item"<<i+1<<endl;
        cin>>b;
     ptr->setData(a,b);
     ptr++;
     }
    for(i=0;i<size;i++){
        cout<<"Item No."<<i+1<<endl;
        prtTemp->getData();
        prtTemp++;
    }

    return 0;
}