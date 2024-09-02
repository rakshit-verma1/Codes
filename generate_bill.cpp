#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

void generate_bill(vector<string> &person_detail, vector<string> &service_detail) {
    cout << "-----------------------------------------------" << endl;
    cout << "                   BILL               " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Customer Details:" << endl;
    cout << "Name: " << person_detail[0] << endl;
    cout << "Contact: " << person_detail[1] << endl;
    cout << "-----------------------------------------------" << endl;

    cout << left << setw(20) << "Service" << setw(20) << "Device" << setw(10) << "Cost(₹)" << endl;
    cout << "-----------------------------------------------" << endl;
    for (size_t i = 0; i < service_detail.size(); i += 3) {
        cout << left << setw(20) << service_detail[i] 
             << setw(20) << service_detail[i + 1] 
             << setw(10) << service_detail[i + 2] << endl;
    }
    cout << "-----------------------------------------------" << endl;
    int total_cost = 0;
    for (size_t i = 2; i < service_detail.size(); i += 3) {
        total_cost += stoi(service_detail[i]);
    }

    cout << right << setw(30) << "             Total Cost: ₹" << total_cost << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Thank you for using our service!" << endl;
    cout << "-----------------------------------------------" << endl;
}
void generate_bill(vector<string> &person_detail, vector<string> &service_detail,int time) {
    cout << "-----------------------------------------------" << endl;
    cout << "                   BILL               " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Customer Details:" << endl;
    cout << "Name: " << person_detail[0] << endl;
    cout << "Contact: " << person_detail[1] << endl;
    cout << "-----------------------------------------------" << endl;

    cout << left << setw(20) << "Service" << setw(20) << "Time" << setw(10) << "Cost(₹)" << endl;
    cout << "-----------------------------------------------" << endl;
    for (size_t i = 0; i < service_detail.size(); i += 3) {
        cout << left << setw(20) << service_detail[i] 
             << setw(20) << service_detail[i + 1] 
             << setw(10) << service_detail[i + 2] << endl;
    }
    cout << "-----------------------------------------------" << endl;
    int total_cost = 0;
    for (size_t i = 2; i < service_detail.size(); i += 3) {
        total_cost += stoi(service_detail[i]);
    }

    cout << right << setw(30) << "             Total Cost: ₹" << total_cost << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Thank you for using our service!" << endl;
    cout << "-----------------------------------------------" << endl;
}