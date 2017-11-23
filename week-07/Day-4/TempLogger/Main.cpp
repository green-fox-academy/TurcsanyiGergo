#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include "SerialPortWrapper.h"
#include <conio.h>
#include "data.h"

using namespace std;

void WelcomeScreen();
Data data_checker(string line);

int main()
{
    Data temp;
    vector<Data>data_vector;

    string input;
    WelcomeScreen();
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }

    // connection

        SerialPortWrapper *serial = new SerialPortWrapper(ports.at(0), 115200 );

        string line;
        while(1) {

            cout << "Please add input!" << endl;
            cin >> input;
            if (input == "h") {
            WelcomeScreen();
            }

            else if (input == "o") {
                serial->openPort();
                cout << "Port opened." << endl;
            }

            else if(input == "s"){
            cout << "Logging started\n";
            while(1){
            if(kbhit()){
                cout << "Logging stopped" << endl << endl;
                break;
            }
            serial->readLineFromPort(&line);
            if (line.length() > 0){
            cout << line << endl;
            }
        }

        }
            else if (input == "c") {
                serial->closePort();
            }
            else if (input == "l") {

            }
             else if (input == "e") {
                exit(0);
            }
        }


        while(1){

        if (line.length() > 0){
        cout << line << endl;
        }
        }



    return 0;
}

void WelcomeScreen() {

cout << "Temperature Logger Application" << endl;;
cout << "==============================" << endl;;
cout << "Commands:" << endl;
cout << "h        Show command list" << endl;;
cout << "o        Open port" << endl;;
cout << "s        Start logging / Stop logging" << endl;;
cout << "c        Close port" << endl;
cout << "l        List after error handling" << endl;
cout << "e        Exit from the program" << endl << endl;

}

Data data_checker(string line) {
    Data data;
    return data;

    size_t pos = user_input.find('.');

    data.year =user_input.substr(0, pos);



}
