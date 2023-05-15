#pragma once
#include "pokemon.h"

class list{
      pokemon*hol;
      int size;
public:
       void add_pokemon(pokemon*&);
       void show_all();
       int getSize(){return size;};
       void minusSize(){size--;};
       ~list();
       list();
};
