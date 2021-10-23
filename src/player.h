#ifndef PLAYER_H_INCLUDED  // �� ��� �������������� ��� ��� ��������� �� header file
#define PLAYER_H_INCLUDED  

#include <iostream>

using namespace std;


class Player{
    string name;
    string gender;
    int age;
    int popularity;
    int tiredState;
    int wins;
    int votes;
    int score;

    public:
        Player();
        Player(string _name, string _gender,int _age);
        ~Player();

        //Sets
        void setName(string _name);
        void setGender(string _gender);
        void setAge(int _age);
        void setPopularity(int _popularity);
        void setTiredState(int _tiredState);
        void setWins(int _wins);
        void setVotes(int _votes);
        void setScore(int _score);
    

        //Gets
        
        string getName();
        string getGender();
        int getAge();
        int getPopularity();
        int getTiredState();
        int getWins();
        int getVotes();
        int getScore();

        //
        void showDetails();
        
};


#endif 