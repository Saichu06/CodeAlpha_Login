#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string FILE_NAME = "users.txt";


bool isUserExists(const string& username) {
    ifstream file(FILE_NAME);
    string storedUsername, storedPassword;

    while (file >> storedUsername >> storedPassword) {
        if (storedUsername == username) {
            return true;
        }
    }
    return false;
}

void registerUser() {
    string username, password;
    cout << "\n--- Registration ---\n";
    cout << "Enter username: ";
    cin >> username;

    if (isUserExists(username)) {
        cout << "❌ Username already exists. Try a different one.\n";
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    ofstream file(FILE_NAME, ios::app);
    file << username << " " << password << endl;

    cout << "✅ Registration successful!\n";
}

void loginUser() {
    string username, password;
    cout << "\n--- Login ---\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file(FILE_NAME);
    string storedUsername, storedPassword;
    bool loginSuccess = false;

    while (file >> storedUsername >> storedPassword) {
        if (storedUsername == username && storedPassword == password) {
            loginSuccess = true;
            break;
        }
    }

    if (loginSuccess) {
        cout << "✅ Login successful! Welcome, " << username << "!\n";
    } else {
        cout << "❌ Login failed. Invalid username or password.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n=== Login & Registration System ===\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
