#include "monster.h"

monster::monster(string nam, int health, string skill1, string skill2, string skill3, string skill4) :
    pokemon(0, "", "", "", "", ""), name(nam), hp(health) {
    name = nam;
    hp = health;
    skill[0] = skill1;
    skill[1] = skill2;
    skill[2] = skill3;
    skill[3] = skill4;
}


