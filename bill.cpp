#include<iostream>
#include<conio.h>
using namespace std;
int billsystem(){
    int items;
    int billamount=0;
  
    cout<<"*********WELCOME TO FOOD BILL SYSTEM**********"<<endl;
    getch();
    system("cls");
    cout<<"please follow following instruction for further process"<<endl;
    cout<<"step:-1 Enter 's' for ordering the food"<<endl;
    cout<<"step:-2 Press 'a' for veg food & Press 'b' for nonveg food"<<endl;
    cout<<"step:-3 Press 1,2,3,4,5, as per your choice of food"<<endl;
    cout<<"step:-4 Press 'b' for pay the bill"<<endl;
    char p;
    step1:
    cin>>p;

    if(p=='s'|| p=='S'){
        cout<<"choice your type of food :-"<<endl;
        cout<<"'a' for veg "<<endl<< "'b' for nonveg"<<endl;

    }
    else{
        cout<<"please enter correct value "<<endl;
        goto step1;
    }
    step2:
    char choice;
    cout<<"please enter your choice"<<endl;
    cin>>choice;
 if(choice=='a' || choice=='A'){
     cout<<"Here is a list of veg food "<<endl;
     cout<<" 1:- pizza , price= Rs.300/- "<<endl;
      cout<<" 2:- burger price= Rs.80/- "<<endl;
       cout<<" 3:- pasta price= Rs.30/- "<<endl;
        cout<<" 4:- manchurian price= Rs.100/- "<<endl;
         cout<<" 5:- noodles price= Rs.80/- "<<endl;
 }


 else if(choice=='b' || choice=='B'){
     cout<<"Here is a list of veg food "<<endl;
     cout<<" 1:-chiken pizza , price= Rs.600/- "<<endl;
      cout<<" 2:-chiken  burger price= Rs.180/- "<<endl;
       cout<<" 3:- chiken pasta price= Rs.130/- "<<endl;
        cout<<" 4:-chiken  manchurian price= Rs.300/- "<<endl;
         cout<<" 5:-chiken  noodles price= Rs.250/- "<<endl;
 }
 
         else {
             cout<<"please enter correct value "<<endl;
             goto step2;
         }
     int vegitems;
     vitems:
     cin>>vegitems;    
    if(vegitems==1){
        cout<<"your order is pizza "<<endl;
        cout<<billamount+300;
        cout<<billamount<<endl;
    }
    
  else  if(vegitems==2){
        cout<<"your order is burger "<<endl;
        cout<<billamount+80;
        cout<<billamount<<endl;
    }
    else if(vegitems==3){
        cout<<"your order is pasta "<<endl;
        cout<<billamount+30;
        cout<<billamount<<endl;
    }
   else  if(vegitems==4){
        cout<<"your order is manchurian "<<endl;
        cout<<billamount+100;
        cout<<billamount<<endl;
    }
  else   if(vegitems==5){
        cout<<"your order is noodles "<<endl;
        cout<<billamount+80;
        cout<<billamount<<endl;
          
    }
    else{
        cout<<"please enter correct value"<<endl;
        goto vitems;
    }
    
     int nvegitems;
     nvitems:
     cin>>nvegitems;    
    if(nvegitems==1){
        cout<<"your order is chiken pizza "<<endl;
        cout<<billamount+300;
        cout<<billamount<<endl;
    }
    
  else  if(vegitems==2){
        cout<<"your order is chiken  burger "<<endl;
        cout<<billamount+80;
        cout<<billamount<<endl;
    }
    else if(vegitems==3){
        cout<<"your order is chiken pasta "<<endl;
        cout<<billamount+30;
        cout<<billamount<<endl;
    }
   else  if(vegitems==4){
        cout<<"your order is chiken  manchurian "<<endl;
        cout<<billamount+100;
        cout<<billamount<<endl;
    }
  else   if(vegitems==5){
        cout<<"your order is chiken noodles "<<endl;
        cout<<billamount+80;
        cout<<billamount<<endl;
          
    }
    else{
        cout<<"please enter correct value"<<endl;
        goto nvitems;
    }
    cout<<"Do you want to select more items y or n "<<endl;
    char selectvalue;
    cin>>selectvalue;
    if(selectvalue=='y' || selectvalue=='Y'){
        goto step2;

    }
    else{
        cout<<"OK"<<endl;
        return billamount;
    }
    getch();
    system("cls");
    cout<<"***********THANK YOU FOR SHOPPING**************  "<<endl<<"VISIT AGAIN";
     return billamount;
}
int main(){
    int print;
  print= billsystem();
    return 0;
}