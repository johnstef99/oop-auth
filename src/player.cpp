#include "player.h"

using namespace std;

Player::Player()
{
    name = "";
    gender = "";
    age = 0;
    popularity = 0;
    tiredState = 0;
    wins = 0;
    votes = 0;
    score = 0;
}

Player::Player(string _name, string _gender, int _age)
{
    name = _name;
    gender = _gender;
    age = _age;
    popularity = 50;
    tiredState = 0;
    votes = 0;
    wins = 0;
    score = 0;
}

Player::~Player()
{
    //cout << "\nPlayer class destoryed\n";
}

void Player::setName(string _name) { name = _name; };
void Player::setGender(string _gender) { gender = _gender; };
void Player::setAge(int _age) { age = _age; };
void Player::setPopularity(int _popularity) { popularity = _popularity; };
void Player::setTiredState(int _tiredState) { tiredState = _tiredState; };
void Player::setWins(int _wins) { wins = _wins; };
void Player::setVotes(int _votes) { votes = _votes; };
void Player::setScore(int _score) { score = _score; };

string Player::getName() { return name; };
string Player::getGender() { return gender; };
int Player::getAge() { return age; };
int Player::getPopularity() { return popularity; };
int Player::getTiredState() { return tiredState; };
int Player::getWins() { return wins; };
int Player::getVotes() { return votes; };
int Player::getScore() { return score; };


void Player::showDetails(){
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
}
