#include <iostream>
#include<vector>
using namespace std;

vector<string> enter_details() {
    vector<string> details;
    string name;
    string phone_number;
    string address;
    do {
        cout << "Enter Your Name: ";
        getline(cin, name);
        if (name.empty()) {
            cout << "Please enter a name" << endl;
        }
    } while (name.empty());
    do {
        cout << "Enter Contact Number: ";
        getline(cin, phone_number);
        if (phone_number.empty()) {
            cout << "Please enter contact details." << endl;
        }  
    } while (phone_number.empty());
    do {
        cout << "Enter Address: ";
        getline(cin, address);
        if (address.empty()) {
            cout << "Address field can't be empty" << endl;
        }
} while (address.empty());
details.push_back(name);
details.push_back(phone_number);
details.push_back(address);
return details;
}