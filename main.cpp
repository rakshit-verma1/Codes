#include<iostream>
#include<vector>
#include <fstream>
#include <string>
#include <sstream>
#include "details.h"
#include "service.h"
#include "printing.h"
#include "generate_bill.h"
#include "use_system.h"
using namespace std;

void addRecord(const string& filename,string value);

int main(){
    string filename = "../owner/database.txt";

    while(1)
    {
        cin.clear();
    printf("\033[H\033[J"); 
    vector<string> details;
    vector<string> printing_data;
    vector<string> system_data;

    details = enter_details();
    printf("\033[H\033[J"); 
    int service_choosen=service();
    printf("\033[H\033[J"); 
    if(service_choosen==1){
        printf("\033[H\033[J"); 
        printing_data=printing();
        printf("\033[H\033[J"); 
        generate_bill(details,printing_data);
        string value = printing_data.back();
        addRecord(filename, value);
        printf("Press enter to go to home screen: ");
        cin.ignore();
        cin.get();
        cin.clear();
        continue;
    }
    else{
        printf("\033[H\033[J"); 
        system_data = use_system();
        printf("\033[H\033[J"); 
        int time = 0;
            string value = system_data.back();
        addRecord(filename,value);
        generate_bill(details,system_data,time);
        printf("Press enter to go to home screen: ");
        cin.ignore();
        cin.get();
        cin.clear();
        continue;
    }
}
}












void addRecord(const string& filename, string value) {
    ofstream outfile(filename, ios::app);
    if (outfile.is_open()) {
        outfile << value << endl;
        outfile.close();
    } else {
    }
}