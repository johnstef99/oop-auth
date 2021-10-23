#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED

#include <iostream>
#include "player.h"

using namespace std;

class Team
{
    string color;
    Player player[11];
    int numOfPlayers;
    string ingredients[100];
    int numOfIngr;

  public:
    Team();
    Team(string _color);
    ~Team();

    void setColor(string _color);
    void setNumOfPlayers(int _numOfPlayers);
    void addPlayer(Player _player);
    void showPlayers();
    void showDetails();
    void addIngr(string _ingredient);
    void showIngr();

    string getColor();
    int getNumOfPlyers();
    Player getPlayer(int i);
};

#endif
