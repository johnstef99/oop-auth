#include <iostream>
#include "player.h"
#include "team.h"

using namespace std;

Team::Team()
{
    color = "";
    numOfPlayers = 0;
    numOfIngr = 0;
}

Team::Team(string _color)
{
    color = _color;
    numOfPlayers = 0;
    numOfIngr = 0;
}

Team::~Team()
{
    //cout << "\nTeam class destoryed\n";
}

void Team::setColor(string _color) { color = _color; };
void Team::setNumOfPlayers(int _numOfPlayers) { numOfPlayers = _numOfPlayers; };

string Team::getColor() { return color; };
int Team::getNumOfPlyers() { return numOfPlayers; };

void Team::addPlayer(Player _player)
{
    player[numOfPlayers] = _player;
    numOfPlayers++;
}

void Team::addIngr(string _ingredient)
{
    ingredients[numOfIngr] = _ingredient;
    numOfIngr++;
}

Player Team::getPlayer(int i)
{
    return player[i];
}

void Team::showPlayers()
{
    for (int i = 0; i != numOfPlayers; i++)
    {
        cout << "   " << i + 1 << ". " << player[i].getName() << endl;
    }
}

void Team::showIngr()
{
    for (int i = 0; i != numOfIngr; i++)
    {
        cout << "   " << i + 1 << ". " << ingredients[i] << endl;
    }
}

void Team::showDetails()
{
    cout << "Color: " << color << endl;
    cout << "Players(" << numOfPlayers << "): " << endl;
    if(numOfPlayers > 0)showPlayers();
    else cout << "  no players yet\n";
    cout << "Ingredients(" << numOfIngr << "): " << endl;
    if(numOfIngr > 0)showIngr();
    else cout << "  no ingredients yet\n";
}