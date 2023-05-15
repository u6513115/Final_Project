#pragma once
#include <iostream>


using namespace std;

class pokemon{
    public:
        pokemon(int,string,string,string,string,string);
        virtual ~pokemon();
        void insert(pokemon*&);
        void showinfo();
        pokemon* movenext();
        string getName();
        string skill[4];
        void minushp(int);
        int hp = 150;
        void evo(){ 
            hp+=rand()%50 + 50;
            name+="+";
        };
    private:
        pokemon* next;
        int ID;
        string name;
    
};