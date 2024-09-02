#include <iostream>
#include<vector>
#include <string>
using namespace std;

    #define gaming_system_per_minute_cost 5;
    #define browsing_system_per_minute_cost 4;
    #define academic_system_per_minute_cost 3;
vector<string> use_system() {
    vector<string> response;
    string time;
    int service_number;
    cout << "Enter corresponding number for selecting items" << endl;
    do {
        cout << "Select the service: " << endl;
        cout << "1.) Gaming System(₹5/minute)" << endl;
        cout << "2.) Browsing Systems(₹4/minute)" << endl;
        cout << "3.) Academic Systems(₹3/minute)" << endl;
        cin >> service_number;
    } while (service_number != 1 && service_number != 2 && service_number != 3);

    if (service_number == 1) {
    response.push_back("Gaming System");
    cout<<"Enter time duration(in minutes): ";
    cin>>time;
    response.push_back(time+" minutes");
    int value = stoi(time)*gaming_system_per_minute_cost;
    response.push_back(to_string(value));
    }
    else if(service_number==2){
            response.push_back("Browsing System");
                cout<<"Enter time duration(in minutes): ";
    cin>>time;
    response.push_back(time+" minutes");
    int value = stoi(time)*browsing_system_per_minute_cost;
    response.push_back(to_string(value));
    }
    else{
            response.push_back("Academic System");
                cout<<"Enter time duration(in minutes): ";
    cin>>time;
    response.push_back(time+" minutes");
    int value = stoi(time)*academic_system_per_minute_cost;
    response.push_back(to_string(value));

    }
    return response;
}









