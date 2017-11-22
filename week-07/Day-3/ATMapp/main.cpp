#include <iostream>
#include <vector>

using namespace std;

class UserData {
private:
    string name;
    unsigned int PinCode;
    unsigned int AdminPinCode;
    int money;
public:
    UserData (string name, unsigned int PinCode, unsigned int AdminPinCode, int money) : name(name), PinCode(PinCode), AdminPinCode(AdminPinCode), money(money){}


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
