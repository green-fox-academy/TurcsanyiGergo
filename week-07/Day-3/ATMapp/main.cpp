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

};

class Users {
private:
    vector<UserData> UserList;
public:
    void addUser(UserData id) {
    UserList.push_back(id);
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
        cout << "The richest person is: " << UserList.at(max_index).GetName() << ".";
    }


};

class Customer : public Users {


};

class Administrator : public Users {

};


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

    return 0;
}
