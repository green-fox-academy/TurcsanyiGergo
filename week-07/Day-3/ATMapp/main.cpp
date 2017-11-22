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


};

class Users {
private:
    vector<UserData> UserList;
    void addUser(UserData id) {
    UserList.push_back(id);


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

    return 0;
}
