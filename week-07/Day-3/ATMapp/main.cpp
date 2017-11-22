#include <iostream>
#include <vector>

using namespace std;


class UserData {
private:
    string name;
    unsigned int PinCode;
    int money;
public:
    UserData (string name, unsigned int PinCode, int money) : name(name), PinCode(PinCode), money(money){}
    int GetMoney() {
    return money;
    }
    string GetName() {
    return name;
    }
    unsigned int GetPinCode() {
    return PinCode;
    }
};

class Users {
private:
    vector<UserData> UserList;
    string AdminPassword = "admin123";
public:
    void addUser(UserData id) {
    UserList.push_back(id);
    }

    string getATMAdminPass() {
    return AdminPassword;
    }

    unsigned int GetUserPin(unsigned int index) {
    return UserList.at(index).GetPinCode();
    }

    unsigned int GetUserCount() {
    return UserList.size();
    }
    int ValidateInput(string input_pass) {
        if (input_pass == AdminPassword) {
                cout << "Admin logged in." << endl;
            return 9999;
        }
        cout << "Login failed, try again!" << endl;
            return -1;
    }

    int ValidateInput(unsigned int input_pass) {
        for(int i = 0; i < UserList.size(); i++) {

        if (input_pass == UserList.at(i).GetPinCode()) {
            cout  << UserList.at(i).GetName() << " logged in." << endl;
            return i;
        }
        }
        cout << "Login failed, try again!" << endl;
            return -1;
}

    void PrintRichest() {
    float max_money = 0;
    unsigned int max_index = 0;
    for(int i = 0; i < UserList.size(); i++) {
        if (UserList.at(i).GetMoney() > max_money) {
            max_money = UserList.at(i).GetMoney();
            max_index = i;
            }
        }
        //cout << "The richest person is: " << UserList.at(max_index).GetName() << ".";
    }

};

int ValidateInput(string input_pass);
int ValidateInput(unsigned int input_pass);
void WelcomeScreen();

int main() {

    UserData u1("Gergo", 3456, 3213000);
    UserData u2("Tomi", 2459, 13456723);
    UserData u3("GeoBazsi", 3981, 3812344);
    UserData u4("Zoli", 4592, 6578972);
    UserData u5("Adam", 7392, 22678987);

    Users BankUsers;
    BankUsers.addUser (u1);
    BankUsers.addUser (u2);
    BankUsers.addUser (u3);
    BankUsers.addUser (u4);
    BankUsers.addUser (u5);

    BankUsers.PrintRichest();

    WelcomeScreen();
    string input_pin;
    cin >> input_pin;
    BankUsers.ValidateInput(input_pin);

    return 0;
}

void WelcomeScreen() {


    cout <<  "Welcome to GregiBank Machine" << endl;
    cout << "****************************" << endl;
    cout << "Please enter you PIN!" << endl;

}

