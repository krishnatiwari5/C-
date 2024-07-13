#include<iostream>
using namespace std;

int main(){
    char selectAgain;
    selectAgain:
    
    cout<<"******WELCOME TO CURRENCY CONVERTER APPLICATION*******"<<endl;
    cout<<"*******PLEASE FOLLOW FOLLOWING INSTRUCTION*********"<<endl;
    
    cout<<"(1) this application is only convert currencies like dollar,rupees,pound,euro."<<endl;
    cout<<"(2) you can enter 'a','b','c','d' respectively for currencies dollar,rupees,pound,euro."<<endl;
    cout<<"(3) Enter the currency1 which you want to convert"<<endl;
    cout<<"(4) Enter the currency2 in which you want to convert currency1"<<endl;
    cout<<"(5) currency signs are (a)dollar,(b)rupees,(c)pound,(d)euro "<<endl;
    cout<<"(6) click s to start the application."<<endl;
    char startvalue;
    float converter();
    selectchoice:
    cin>>startvalue;
    if(startvalue=='s' || startvalue=='S'){
        cout<<converter();
        }
         else{
        cout<<"you have entered wrong value , please enter correct value"<<endl;
        goto selectchoice;
        
        cout<<"do you want to use this application again y or n..."<<endl;
        if(selectAgain=='y' || selectAgain=='Y'){
            goto selectAgain;

        }
        else if(selectAgain=='n' || selectAgain=='N'){
            cout<<"******Thankyou for using this application******"<<endl<<"*****VISIT AGAIN*****"<<endl;
        }
    
   
    }
    return 0; 
}
float converter(){
    char currecyname1;
    char currencyname2;
    float currency1;
    float currency2;
    currenlevel:
    cout<<"enter your currency1 name..."<<endl;
    cin>>currecyname1;
    cout<<"enter your currency1 value..."<<endl;
    cin>>currencyname2;

    switch (currecyname1)
    {
    case 'a':
    currelevel1:
    cout<<"enter your currency2 name... "<<endl;
    cin>>currencyname2;
    
    if(currencyname2=='a' || currencyname2=='A'){
        currency2=currency1*1;
        cout<<"your value is :- "<<currency2<<endl;

    }
    else if (currencyname2=='b' || currencyname2=='B'){
        currency2=currency1*73.84;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else if (currencyname2=='c' || currencyname2=='B'){
        currency2=currency1*.85;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else if (currencyname2=='d' || currencyname2=='B'){
        currency2=currency1*0.72;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else{
        cout<<"you have enter wrong value..."<<endl;
        goto currelevel1;
    }

    
        break;
        case 'b':
        currelevel2:
        cout<<"enter your currency2 name... "<<endl;
    cin>>currencyname2;
    
    if(currencyname2=='a' || currencyname2=='A'){
        currency2=currency1*0.01;
        cout<<"your value is :- "<<currency2<<endl;

    }
    else if (currencyname2=='b' || currencyname2=='B'){
        currency2=currency1*1;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else if (currencyname2=='c' || currencyname2=='B'){
        currency2=currency1*0.01;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else if (currencyname2=='d' || currencyname2=='B'){
        currency2=currency1*0.09;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else{
        cout<<"you have enter wrong value..."<<endl;
        goto currelevel2;
    }
    break;



    case 'c':
    currelevel3:
    cout<<"enter your currency2 name... "<<endl;
    cin>>currencyname2;
    
    if(currencyname2=='a' || currencyname2=='A'){
        currency2=currency1*1.37;
        cout<<"your value is :- "<<currency2<<endl;

    }
    else if (currencyname2=='b' || currencyname2=='B'){
        currency2=currency1*101.20;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else if (currencyname2=='c' || currencyname2=='B'){
        currency2=currency1*1;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else if (currencyname2=='d' || currencyname2=='B'){
        currency2=currency1*1.17;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else{
        cout<<"you have enter wrong value..."<<endl;
        goto currelevel3;
    }
    break;


    case 'd':
    currelevel4:
    cout<<"enter your currency2 name... "<<endl;
    cin>>currencyname2;
    
    if(currencyname2=='a' || currencyname2=='A'){
        currency2=currency1*1.16;
        cout<<"your value is :- "<<currency2<<endl;

    }
    else if (currencyname2=='b' || currencyname2=='B'){
        currency2=currency1*86.37;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else if (currencyname2=='c' || currencyname2=='B'){
        currency2=currency1*0.85;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else if (currencyname2=='d' || currencyname2=='B'){
        currency2=currency1*1;
        cout<<"your value is :- "<<currency2<<endl;
    }
    else{
        cout<<"you have enter wrong value..."<<endl;
        goto currelevel4;
    }
    break;
 
    default:
    cout<<"please Refer instruction table and  enter correct value... "<<endl;
    goto currenlevel;
        break;
    }
return currency2;
}