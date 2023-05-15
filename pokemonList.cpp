#include "pokemonList.h"

list::list() {
    hol = NULL;
    size = 0;
}

list::~list() {
    pokemon* t = hol, *temp;
    int i;
    for (i = 0; i < size; i++) {
        temp = t;
        t = t->movenext();
        delete temp;
    }
}

void list::show_all() {
    pokemon* t = hol;
    int i;
    for (i = 0; i < size; i++) {
        t->showinfo();
        t = t->movenext();
    }
}

void list::add_pokemon(pokemon*& A) {
    if (hol == NULL) {
        hol = A;
    }
    else {
        hol->insert(A);
        hol = A;
    }
    size++;
}
