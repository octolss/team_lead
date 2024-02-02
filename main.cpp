#include <iostream>
#include <string>
#include <vector>

using namesapce std;


class User{
    public:
        string login;
        string password;

        User(string l, string p) : login(l), password(p){}
};

class Admin : public User{
    private:
        vector<User> banned;
        vector<Clothes> items;
    public:
        Admin(vector<User> banned, vector<Clothes> items) : User(string login, string password){}

};

