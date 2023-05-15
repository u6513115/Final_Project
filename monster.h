#pragma once
#include "pokemon.h"
class monster : public pokemon {
public:
    monster(string nam, int health, string skill1, string skill2, string skill3, string skill4);
    string getName(){return name;}
    int hp = 100;

private:
    string name;
};

