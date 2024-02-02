#include <iostream>
#include <string>
#include <vector>

using namesapce std;


class User{
    private:
        string login;
        string password;

        User(string l, string p) : login(l), password(p){}
};

class Clothes{
    public:
        string brand;
        string type;
        string man_or_da_woman;
}