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

    int userClient[1000];
    int i;

    int typeSelection;

    cout << "Welcome to the Mazebank!!!\n\n";

    system("pause");

    for (i = 0; i < 1000; i++)
    {

        do
        {
            userMenu();

            cout << "Choose into navigation bar, what is you want to do..\n";

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
                    cout << "Account: " << userClient[i] << endl;
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
                cout << "Account: " << userClient[i] << endl;
                cout << "Current balance now: "
                     << "R$" << balance << endl;
            }
            else if (typeSelection == 4)
            {
                cout << "Feel free to back again!!!" << endl;
                balance = 0;
            }
            else
            {
                cout << "****INVALID OPTION!!!****" << endl;
            }
        } while (typeSelection != 4);
    }
}