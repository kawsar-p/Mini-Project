#include<iostream>
#include<cmath>
using namespace std;

class operation {
public:
    void addition() {
        int choice;
        cout << "\nAddition" << endl;
        cout << "--------------" << endl;

        do {
            double num = 0;
            char c;
            double sum = 0;
            cout << "\nEnter Your value add (+) and end with = ";
            do {
                cin >> num;
                sum = sum + num;
                cin >> c;
            } while (c != '=');

            cout << "Addition " << sum << endl;

            cout << "\nAddition menu" << endl;
            cout << "1. Again" << endl;
            cout << "2. Back" << endl;
            cout << "\nEnter your choice(1 or 2): ";
            cin >> choice;

            if (choice == 2) {
                cout << "Welcome to Home menu\n";
            }
        } while (choice == 1);
    }

    void subtraction() {
        int choice;
        cout << "\nsubtraction" << endl;
        do {
            double a, b;
            cout << "Enter your first value: ";
            cin >> a;
            cout << "Enter Your second value: ";
            cin >> b;
            double sub = a - b;
            cout << "Subtraction: " << sub << endl;

            cout << "\nSubtraction menu" << endl;
            cout << "1. Again" << endl;
            cout << "2. Back" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> choice;
            if (choice == 2);
        } while (choice == 1);
    }

    void multiplication() {
        int choice;
        cout << "multiplication" << endl;
        do {
            double num = 0, mul = 1;
            char op;
            cout << "Enter Your value add (*) and end with = : ";
            do {
                cin >> num;
                mul = mul * num;
                cin >> op;
            } while (op != '=');
            cout << "Multiplication: " << mul << endl;

            cout << "\nMultiplication menu" << endl;
            cout << "1. Again" << endl;
            cout << "2. Back to home menu" << endl;
            cout << "\nEnter your choice(1 or 2): ";
            cin >> choice;

            if (choice == 2) {
                cout << "Welcome to Home menu";
                cout << "\n";
            }
        } while (choice == 1);

    }

    void division() {
        int choice;
        cout << "Division" << endl;
        cout << "------------" << endl;
        do {
            double a, b;
            cout << "Enter your first value: ";
            cin >> a;
            cout << "Enter Your second value: ";
            cin >> b;

            if (b != 0) {
                double div = a / b;
                cout << "Division: " << div << endl;
            }
            else {
                cout << "Error: Division by zero. Try Again.";
            }

            cout << "\nDivision menu" << endl;
            cout << "1. Again" << endl;
            cout << "2. Back" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> choice;
            if (choice == 2);
        } while (choice == 1);
    }

    void table() {
        int choice;
        do {
            int n;
            cout << "\nEnter your table no: ";
            cin >> n;
            int table[10];

            for (int i = 1; i <= 10; i++) {
                table[i - 1] = n * i;
            }

            cout << "\nMultiplication table of " << n << ":" << endl;
            cout <<"--------------------" << endl;
            for (int i = 1; i <= 10; i++) {
                cout << n << " x " << i << " = " << table[i - 1] << endl;
            }

            cout << "\nTable menu" << endl;
            cout << "1. Again" << endl;
            cout << "2. Back" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> choice;

            if (choice == 2);
        } while (choice == 1);
    }
};

int main() {

    operation o;
    int choice;

    do {
        cout << "\nHome Menu" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication " << endl;
        cout << "4. Division" << endl;
        cout << "5. Table" << endl;
        cout << "6. Exit " << endl;

        cout << "\nEnter Your choice (1-5): ";
        cin >> choice;

        switch (choice) {
        case 1:
            o.addition();
            break;

        case 2:
            o.subtraction();
            break;

        case 3:
            o.multiplication();
            break;

        case 4:
            o.division();
            cout << endl;
            break;

        case 5:
            o.table();
            break;

        case 6:
            cout << "Thank You" << endl;
            cout << "Back to Home menu" << endl;
            cout << "-------------------\n" << endl;
            break;

        default:
            cout << "Error!" << endl;
            cout << "\nBack to Home menu" << endl;
            cout << "-------------------\n" << endl;
        }
    } while (true);
    

    return 0;
}
