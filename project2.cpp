

#include <iostream>

#include <map>

#include <set>

#include <string>

 

using namespace std;

 

class SocialMedia {

private:

struct UserInfo {

string gender;

int age;

string contact;

set<string> connections;

};

 

map<string, UserInfo> users;

 

public:

void addUser(const string& userName, const string& gender, int age, const string& contact) {

if (users.find(userName) == users.end()) {

users[userName] = {gender, age, contact, set<string>()};

cout << userName << " has been added to the social media app." << endl;

} else {

cout << userName << " already exists." << endl;

}

}

 

void displayUsers() {

if (users.empty()) {

cout << "No users in the social media app." << endl;

} else {

cout << "Users in the social media app:" << endl;

for (const auto& user : users) {

cout << "Username: " << user.first

<< ", Gender: " << user.second.gender

<< ", Age: " << user.second.age

<< ", Contact: " << user.second.contact << endl;

}

}

}

};

int main() {

SocialMedia app;

int choice;

string userName, gender, contact;

int age;

 

while (true) {

cout << "1. Add User" << endl;

cout << "2. Display Users" << endl;

cout << "3. Exit" << endl;

cout << "Enter your choice: ";

cin >> choice;

 

switch (choice) {

case 1:

cout << "Enter the name of the user to add: ";

cin >> userName;

cout << "Enter the gender of the user: ";

cin >> gender;

cout << "Enter the age of the user: ";

cin >> age;

cout << "Enter the contact (email or phone number) of the user: ";

cin >> contact;

app.addUser(userName, gender, age, contact);

break;

case 2:

app.displayUsers();

break;

case 3:

return 0;

default:

cout << "Invalid choice. Please try again." << endl;

}

}

 

return 0;

}