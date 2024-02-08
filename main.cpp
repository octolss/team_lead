#include <iostream>
#include <vector>
#include <string>

using namespace std;


class User {

public:
    string login;
    string password;
};

class Clothes {

public:
    string brand;
    string type;
    int amount;
    string gender; 


    Clothes(string brand, string type, int amount, string gender)
    : brand(brand), type(type), amount(amount), gender(gender) {}


    virtual void displayInfo() {
    cout << "Brand: " << brand << ", Type: " << type << ", Amount: " << amount << ", Gender: " << gender << endl;
    }
};

class Admin : public User {

private:
    vector<User*> bannedUsers;
    vector<Clothes*> items;
    
public:
    void banUser(User* user) {
        bannedUsers.push_back(user);
        cout << user->login << " has been banned." << endl;
    }

    bool checkBanned(string& login){
        for(int i; i < bannedUsers.size(); i++){
            if(bannedUsers[i] == login){
                cout << "This user is banned" << endl;
                return true;
            }
        }
        cout << "This user is valid" << endl;
        return true;
    }
};




class Review {

public:
    string reviewText;
    int rating;
};


class Cart {

public:
    int itemCount;
    int totalPrice;
};


class Payment : public Cart {

public:
    int totalPrice;
    string paymentMethod;
};


class Jeans : public Clothes {

public:
    int size;
    string material;
    string color;

    Jeans(string brand, string type, int amount, string gender, int size, string material, string color)
    : Clothes(brand, type, amount, gender), size(size), material(material), color(color) {}


    void displayInfo() override {
    cout << "Jeans - Size: " << size << ", Material: " << material << ", Color: " << color << endl;
    }
};



int main() {

    Jeans myJeans("Levi's", "Denim", 50, "man", 32, "Denim", "Blue");
    myJeans.displayInfo();


    Admin admin1;
    User user1;
    user1.login = "exampleUser";
    admin.banUser(&user1);

    for(int i; i<bannedUsers.size(); i++){
        admin1.checkBanned(user1.login1)
    }


    return 0;
}