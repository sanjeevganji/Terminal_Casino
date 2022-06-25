#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
void Play_game(int &funds, string name);
void Home(int &funds, string name);
int Manage_Funds(int &funds, string name);

int main()
{
    string name;
    int funds = 1000;
    cout << "Please enter your name:" << endl;
    getline(cin, name);
    Home(funds, name);

    return 0;
}
void Play_Game(int &funds, string name)
{
    int flow;
    cout << "you have choosen option 1. Play Game" << endl
         << endl;
    cout << "CHOOSE A GAME TO PLAY:" << endl
         << endl;
    cout << "1. SLOTS" << endl
         << endl;
    cout << "2. GUESSING GAME" << endl
         << endl;
    cout << "3. TICK TOCK CLOCK" << endl
         << endl;
    cout << "4. go back to main menu" << endl
         << endl;

    while (1)
    {
        cin >> flow;
        switch (flow)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            Home(funds, name);
            break;

        default:
            continue;
        }
    }
}
int Manage_Funds(int &funds, string name)
{
    int flow;
    cout << "you have choosen option 2. Manage Funds" << endl
         << endl;
    cout << "YOUR AVAILABLE BALANCE: " << funds << endl
         << endl;
    cout << "1. ADD FUNDS " << endl
         << endl;
    cout << "2. WITHDRAW FUNDS " << endl
         << endl;
    cout << "3. go back to main menu " << endl
         << endl;
    while (1)
    {
        cin >> flow;
        cout<<"\n-------------------------------------------------------\n";
        switch (flow)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:
            Home(funds, name);
            break;

        default:
            continue;
        }
    }
}
void Home(int &funds, string name)
{

    int flow;
    cout << "------------------------------------------------------- " << endl;
    cout << "|                                                     |" << endl;
    cout << "|       \\        /  ___      __  __        __         |" << endl;
    cout << "|        \\  /\\  /  |__  |   |   /  \\ |\\/| |_          |" << endl;
    cout << "|         \\/  \\/   |___ |__ |__ \\__/ |  | |__         |" << endl;
    cout << "|                                                     |" << endl;
    cout << "|              _|__     ____   __       _|__          |" << endl;
    cout << "|             |_|_        |   /  \\     |_|_           |" << endl;
    cout << "|             __|_|       |   \\__/     __|_|          |" << endl;
    cout << "|               |                        |            |" << endl;
    cout << "|            ____                                     |" << endl;
    cout << "|           |    \\  __  __          __                |" << endl;
    cout << "|           |      |__||__  | |\\ | /  \\               |" << endl;
    cout << "|           |____/ |  | __| | | \\| \\__/               |" << endl;
    cout << "|                                                     |" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Welcome " << '"' << name << '"' << endl
         << endl;
    cout << "1. Play Game" << endl
         << endl;
    cout << "2. Manage Funds" << endl
         << endl;
    cout << "3. How To Play" << endl
         << endl;
    cout << "4. Credits" << endl
         << endl;
    cout << "5. Exit" << endl
         << endl;
    cout << "<CHOOSE AN OPTION BY ENTERING A VALID NUMBER>\n-------------------------------------------------------" << endl
         << endl;

    while (1)
    {

        cin >> flow;
        cout<<"\n-------------------------------------------------------\n";
        switch (flow)
        {
        case 1:
            Play_Game(funds, name);
            break;
        case 2:
            Manage_Funds(funds, name);
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            return;
            

        default:
            cout << "!!!PLEASE ENTYER A VALID INPUT!!!" << endl
                 << endl;
            continue;
            
        }
    }
}