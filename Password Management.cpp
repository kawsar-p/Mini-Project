#include <iostream>
using namespace std;

bool Password_Validity(const string &password)
{
    if (password.length() < 8)
    {
        cout << "Password must be at least 8 characters long.\n";
        return false;
    }
    bool Upper = false, Lower = false, Digit = false, SpecialChar = false;

    for (int i = 0; i < password.length(); i++)
    {
        char ch = password[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            Upper = true;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            Lower = true;
        }
        else if (ch >= '0' && ch <= '9')
        {
            Digit = true;
        }
        else
        {
            SpecialChar = true;
        }
    }

    if (!Upper)
    {
        cout << "Password must include at least one uppercase letter.\n";
        return false;
    }
    if (!Lower)
    {
        cout << "Password must include at least one lowercase letter.\n";
        return false;
    }
    if (!Digit)
    {
        cout << "Password must include at least one digit.\n";
        return false;
    }
    if (!SpecialChar)
    {
        cout << "Password must include at least one special character.\n";
        return false;
    }
    return true;
}

int main()
{
    string password;
    cout << "Enter your password: ";
    cin >> password;

    if (Password_Validity(password))
    {
        cout << "Password is valid.\n";
    }
    else
    {
        cout << "Password is invalid.\n";
    }

    return 0;
}
