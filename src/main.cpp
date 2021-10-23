#include <iostream>
#include "team.h"

using namespace std;
static Team blue("Blue");
static Team red("Red");

void menuLine() { cout << "#################" << endl; }

int teamSelection()
{
    int _teamSelection = 0;

    while (_teamSelection == 0)
    {
        cout << endl;
        cout << "1. Blue Team\n"
             << "2. Red Team\n"
             << "\nSelect team: ";
        cin >> _teamSelection;

        if (_teamSelection != 1 && _teamSelection != 2)
        {
            cout << "\nPlease select 1 or 2\n";
            _teamSelection = 0;
        }
    }
    return _teamSelection;
}

void addPlayer()
{
    Player temp;

    string name;
    int age;
    string gender;
    int _teamSelection;

    cout << "Type name: ";
    cin >> name;
    temp.setName(name);
    cout << "Type age: ";
    cin >> age;
    temp.setAge(age);
    cout << "Type gender: ";
    cin >> gender;
    temp.setGender(gender);
    _teamSelection = teamSelection();
    if (_teamSelection == 1)
        blue.addPlayer(temp);
    else
        red.addPlayer(temp);
}

void teamDetails()
{
    int _teamSelection = teamSelection();
    if (_teamSelection == 1)
    {
        menuLine();
        blue.showDetails();
    }
    else
    {
        menuLine();
        red.showDetails();
    }
}

void selectPlayersFromTeam(int teamSelection)
{
    int selectedPlayer = 0;
    int maxSelection = 0;

    if (teamSelection == 1)
    {
        blue.showPlayers();
        maxSelection = blue.getNumOfPlyers();
    }
    else
    {
        red.showPlayers();
        maxSelection = red.getNumOfPlyers();
    }

    while (selectedPlayer <= 0 || selectedPlayer > maxSelection)
    {
        cout << endl;
        cout << "Choose Player: ";
        cin >> selectedPlayer;
    }

    if (teamSelection == 1)
    {
        menuLine();

        blue.getPlayer(selectedPlayer - 1).showDetails();
    }
    else
    {
        menuLine();

        red.getPlayer(selectedPlayer - 1).showDetails();
    }
}

Player searchPlayer(string name)
{
    Player null;
    null.setName("null");
    if (blue.getNumOfPlyers() > 0)
    {
        for (int i = 0; i != blue.getNumOfPlyers(); i++)
        {
            if (blue.getPlayer(i).getName() == name)
                return blue.getPlayer(i);
        }
    }

    if (red.getNumOfPlyers() > 0)
    {
        for (int i = 0; i != red.getNumOfPlyers(); i++)
        {
            if (red.getPlayer(i).getName() == name)
                return red.getPlayer(i);
        }
    }

    return null;
}

void showPlayers()
{
    int selection = 0;
    int _teamSelection = 0;

    while (selection != 1 && selection != 2)
    {
        cout << endl;
        cout << "1. Choose from Team" << endl;
        cout << "2. Type name" << endl;
        cout << "Select: ";
        cin >> selection;
    }

    switch (selection)
    {
    case 1:
        _teamSelection = teamSelection();
        selectPlayersFromTeam(_teamSelection);
        break;

    case 2:
        string name;
        cout << "Blue Team's Players: \n";
        blue.showPlayers();
        cout << "Red Team's Players: \n";
        red.showPlayers();
        cout << "Type player's name: ";
        cin >> name;
        Player result = searchPlayer(name);
        if(result.getName() == "null"){
            cout << "Can't find this player" << endl;
        }else{
            result.showDetails();
        }
        break;
    }

}

void printLogo(){
    cout << "#####################################################\n"
    << "#                                                   #\n"
    << "#   #            #                  ##########      #\n"
    << "#   ##          ##                  #               #\n"
    << "#   #  #       # #                  #               #\n"
    << "#   #    #   #   #                  #               #\n"
    << "#   #      #     #                  #               #\n"
    << "#   #            #                  #               #\n"
    << "#   #            #                  #               #\n"
    << "#   #            #        #         ##########      #\n"
    << "#                                                   #\n"
    << "#####################################################\n";
}

int main()
{
    printLogo();
    int exitInt = 0;
    int selection;

    while (exitInt != 1)
    {
        menuLine();
        cout << "\n1. Add Player"
             << "\n2. Team Details"
             << "\n3. Player Details\n"
             << "\n0. Exit\n";
        menuLine();
        cout << "Select: ";
        cin >> selection;
        switch (selection)
        {
        case 1:
            menuLine();
            addPlayer();
            break;
        case 2:
            menuLine();
            teamDetails();
            break;
        case 3:
            menuLine();
            showPlayers();
            break;
        case 0:
            exitInt = 1;
            break;
        }
    }

    return 0;
}
