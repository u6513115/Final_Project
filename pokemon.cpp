#include "pokemon.h"

pokemon::pokemon(int id,string nam ,string skill1,string skill2,string skill3,string skill4){
    ID = id;
    name = nam;
    skill[0] = skill1;
    skill[1] = skill2;
    skill[2] = skill3;
    skill[3] = skill4;
    next = NULL;
}


void pokemon::showinfo(){
         string is_dead = hp <= 0 ? "Dead" : "Alive";
         cout<<"Pokemon name:"<<name<<endl;
         cout<<"      hp:"<<hp<<endl;
}
void pokemon::insert(pokemon*& x){
     this->next=x;
}
pokemon* pokemon::movenext(){
    return next;
}

pokemon::~pokemon(){}

string pokemon::getName(){
    return name;
}

void pokemon::minushp(int x){
    hp-=x;
}