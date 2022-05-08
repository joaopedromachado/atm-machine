#include <iostream>
using namespace std;

void userMenu()
{
    cout << "------------------- \n";
    cout << "| MENU: 	  |\n";
    cout << "|                 |\n";
    cout << "|  1 - Balance    |\n";
    cout << "|  2 - Withdraw   |\n";
    cout << "|  3 - Deposit    |\n";
    cout << "|  4 - Exit       |\n";
    cout << "-------------------\n";
}

int main()
{

    double balance, withdraw, deposit;

    balance = 0;

    string accountPassword, accountAddress;

    int typeSelection;

    cout << "Welcome to the Mazebank!!!\n\n";

    system("pause");

    cout << "\nEnter your password and we will direct you..\n\n";
    cout << "Account: ";
    cin >> accountAddress;
    cout << "Password: ";
    cin >> accountPassword;

    if (accountPassword == "123456" && accountAddress == "12345-6")
    {

        cout << "\nHello, UserAccount!!!\n\n";

        system("pause");

        userMenu();

        cout << "Choose into navigation bar, what is you want to do..\n";
        do
        {

            cout << "Enter option: ";
            cin >> typeSelection;

            if (typeSelection == 1)
            {
                cout << "Your current balance is: "
                     << "R$" << balance << endl;
            }
            else if (typeSelection == 2)
            {
                cout << "Enter the amount you need to withdraw: ";
                cin >> withdraw;

                if (withdraw <= balance)
                {
                    balance -= withdraw;
                    cout << "Account: " << accountAddress << endl;
                    cout << "Current balance now: "
                         << "R$" << balance << endl;
                }
                else
                {
                    cout << "Not enough money, please deposit some amount." << endl;
                }
            }
            else if (typeSelection == 3)
            {
                cout << "Enter the amount you need to deposit: ";
                cin >> deposit;
                balance += deposit;
                cout << "Account: " << accountAddress << endl;
                cout << "Current balance now: "
                     << "R$" << balance << endl;
            }
            else if (typeSelection == 4)
            {
                cout << "Feel free to back again!!!";
            }
            else
            {
                cout << "****INVALID OPTION!!!****" << endl;
            }
        } while (typeSelection != 4); // WHEN THE USER INPUT NUMBER 4, END THE PROGRAM
    }
    else
    {
        cout << "Incorrect account, please try again later.." << endl;
    }
}