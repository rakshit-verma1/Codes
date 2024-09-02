#include<iostream>
using namespace std;
int service(){
    cout<<"Press(numeric 1 or 2) keys for following services:-";
    cout<<"1.)Printing";
    cout<<"2.)System";
    int choice;
    do{
        cin<<choice;
    }while(choice!=1 || choice !=2);
    if(choice==1){
        printing();
    }
    else{
        system();
    }
}