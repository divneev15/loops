/* divneev singh 
PRN 24070123043
ENTC A2
*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string username, password;
    string inputUsername, inputPassword;
    int attempts = 0;
    const int maxAttempts = 3;

    cout << "=== Registration ===" << endl;
    cout << "Set your username: ";
    getline(cin, username);

    cout << "Set your password: ";
    getline(cin, password);

    cout << "== Login ===" << endl;

    while (attempts < maxAttempts) 
    {
        cout << "Enter your username: ";
        getline(cin, inputUsername);

        cout << "Enter your password: ";
        getline(cin, inputPassword);

        if (inputUsername == username && inputPassword == password) 
        {
            cout << "\n Login successful. Welcome, " << username << "!" << endl;
            return 0;
        } 
        else 
        {
            attempts++;
            if (attempts < maxAttempts) 
            {
                cout << "\n Incorrect credentials. Attempts left: " 
                     << (maxAttempts - attempts) << "\n" << endl;
            } 
            else 
            {
                cout << "\n Too many failed attempts. System is now locked." << endl;
            }
        }
    }

    return 0;
}

/*
=== Registration ===
Set your username: div
Set your password: adc56

== Login ===
Enter your username: div
Enter your password: advd

 Incorrect credentials. Attempts left: 2

Enter your username: div
Enter your password: 6273

 Incorrect credentials. Attempts left: 1

Enter your username: div
Enter your password: gfdsju

 Too many failed attempts. System is now locked.
*/
