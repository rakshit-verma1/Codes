#include <iostream>
#include<vector>
#include <string>
using namespace std;

#define photocopy_laser_price 2
#define photocopy_colour_price 4
#define print_laser_price 5
#define print_colour_price 10
#define scan_price 1

void printing_option(vector<string>& resp, string number_of_pages);
void photocopy_option(vector<string>& resp, string number_of_pages);

vector<string> printing() {
    vector<string> response;
    string service;
    string type_of_device;
    string number_of_pages;
    int service_number;

    cout << "Enter corresponding number for selecting items" << endl;
    do {
        cout << "Select the service: " << endl;
        cout << "1.) Print" << endl;
        cout << "2.) Photocopy" << endl;
        cout << "3.) Scan" << endl;
        cin >> service_number;
    } while (service_number != 1 && service_number != 2 && service_number != 3);

    if (service_number == 1) {
        printing_option(response, number_of_pages);
    }
    else if(service_number==2){
        photocopy_option(response,number_of_pages);
    }
    else{
        response.push_back("Scan");
        cout << "Enter number of pages" << endl;
        cin >> number_of_pages;
        string type = "NA";
        response.push_back(type);
        int value = stoi(number_of_pages) * scan_price;
        // cout << "Your final bill is ₹" << value << endl;
        response.push_back(to_string(value));

    }
    return response;
}









void printing_option(vector<string>& resp, string number_of_pages) {
    resp.push_back("Print");
    int device_number;

    do {
        cout << "Choose type of printer\n";
        cout << "1.) LaserJet(₹5/pg)" << endl;
        cout << "2.) InkJet(₹10/pg)" << endl;
        cin >> device_number;
    } while (device_number != 1 && device_number != 2);

    if (device_number == 1) {
        string type = "LaserJet";
        resp.push_back(type);
        cout << "Enter number of pages" << endl;
        cin >> number_of_pages;
        int value = stoi(number_of_pages) * print_laser_price;
        // cout << "Your final bill is ₹" << value << endl;
        resp.push_back(to_string(value));
    }

    if (device_number == 2) {
        string type = "InkJet";
        resp.push_back(type);
        cout << "Enter number of pages" << endl;
        cin >> number_of_pages;
        int value = stoi(number_of_pages) * print_colour_price;
        // cout << "Your final bill is ₹" << value << endl;
        resp.push_back(to_string(value));
    }
}
void photocopy_option(vector<string>& resp, string number_of_pages) {
    resp.push_back("Photocopy");
    int device_number;

    do {
        cout << "Choose type of printer\n";
        cout << "1.) LaserJet(₹2/pg)" << endl;
        cout << "2.) InkJet(₹4/pg)" << endl;
        cin >> device_number;
    } while (device_number != 1 && device_number != 2);

    if (device_number == 1) {
        string type = "LaserJet";
        resp.push_back(type);
        cout << "Enter number of pages" << endl;
        cin >> number_of_pages;
        int value = stoi(number_of_pages) * photocopy_laser_price;
        // cout << "Your final bill is ₹" << value << endl;
        resp.push_back(to_string(value));
    }

    if (device_number == 2) {
        string type = "InkJet";
        resp.push_back(type);
        cout << "Enter number of pages" << endl;
        cin >> number_of_pages;
        int value = stoi(number_of_pages) * photocopy_colour_price;
        // cout << "Your final bill is ₹" << value << endl;
        resp.push_back(to_string(value));
    }
}
