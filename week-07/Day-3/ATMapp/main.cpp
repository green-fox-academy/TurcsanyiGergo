#include <iostream>
#include <vector>

using namespace std;

class UserData {
public:
    string name;
    unsigned int PinCode;
    unsigned int AdminPinCode;
    int money;

};

class Users {
private:
    vector<UserData> UserList;
    void addUser(string name, unsigned int PinCode, unsigned int AdminPinCode, int money) {
    UserDataTemp;


    }


};

class Customer : public Users {


};

class Administrator : public Users {

};
