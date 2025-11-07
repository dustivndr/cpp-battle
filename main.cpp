#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

bool mainMenu()
{
    bool play = true;
    while(true)
    {
        system("cls");
        cout << "+------------------------------------------------------------+" << endl;
        cout << "|                                                            |" << endl;
        cout << "|                  COWBOY C++                                |" << endl;
        cout << "|                           BATTLE AND QUIZ                  |" << endl;
        cout << "|                                                            |" << endl;
        cout << "|                                                            |" << endl;
        cout << "|                                                            |" << endl;
        cout << "|                    PLAY            EXIT                    |" << endl;
        if (play)
            cout << "|                    ----                                    |" << endl;
        else
            cout << "|                                    ----                    |" << endl;
        cout << "|                                                            |" << endl;
        cout << "|                                                            |" << endl;
        cout << "|                                                            |" << endl;
        cout << "| *use left-right/a-d key to select                          |" << endl;
        cout << "+------------------------------------------------------------+" << endl;

        char key = getch();

        if (key == 75 || key == 77 || key == 'a' || key == 'd' || key == 'A' || key == 'D')
        {
            play = !play;
        }
        else if (key == 13)
        {
            if (play) return 1;
            else return 0;
        }
    }
}

int main()
{
    bool startGame = mainMenu();

    if (startGame)
    {
        system("cls");
        cout << "Oke";
    }
    else
    {
        system("cls");
        return 0;
    }

    return 0;
}
