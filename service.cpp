#include<iostream>
using namespace std;
int service(){
    cout<<"Press(numeric 1 or 2) keys for following services:-"<<endl;
    cout<<"1.)Printing Service"<<endl;
    cout<<"2.)System Allotment Service"<<endl;
    int choice;
    do{
        cin>>choice;
    }while(choice!=1 && choice !=2);
    if(choice==1){
        return 1;
    }
    else{
        return 2;
    }
}