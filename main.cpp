#include "pokemon.h"
#include "pokemonList.h"
#include "monsterinfo.h"
#include "battle.h"



int main(){
    int choice = 0;
    int Attack = 0,enemyAttack = 0;
    int check_loop = 1;
    string err;
    pokemon* ptr;
    list bag;
    system("cls");
    do
    {
        cout << "-----------Your journey Begin-----------" << endl;
        cout << "[1] Bulbasaur" << endl
             << "[2] Charmander" << endl
             << "[3] Squirtle" << endl;
        cout << "Choose your starter Pokemon :  ";
        cin >> choice;

        try
        {
            switch (choice)
            {
            case 1:
                ptr = new pokemon(1, "Bulbasaur", "Tackle", "Vine Whip", "Razor Leaf", "Take Down");
                bag.add_pokemon(ptr);
                check_loop = 0;
                break;
            case 2:
                ptr = new pokemon(1, "Charmander", "Scratch", "Ember", "Slash", "Dragon Breath");
                bag.add_pokemon(ptr);
                check_loop = 0;
                break;
            case 3:
                ptr = new pokemon(1, "Squirtle", "Tackle", "Bite", "Water Gun", "Aqua Tail");
                bag.add_pokemon(ptr);
                check_loop = 0;
                break;
            default:
                if (cin.fail())
                    throw err = "---Type Integer---";
                else
                    throw err = "---Type 1-3---";
                break;
            }
        }
        catch (string e)
        {
            cout << e << endl;
            cin.clear();
            cin.ignore(50, '\n');
        }
        catch (exception &e)
        {
            cout << "Std exception: " << e.what() << endl;
        }

    } while (check_loop);
    for(int i = 0 ; i < 10 ; i++){
        system("cls");
        if(i > 1 ){
            cout<< i+1 << " round"<<endl;
        }
       //cout<<bag.getSize();
        if(bag.getSize() < 1){
            cout << "GameOver"<<endl;
            break;
        }
        cout<<mon[i].getName()<<" Appear!!!"<<endl;
        cout<<"Go get Em,"<<ptr->getName()<< "!!!"<<endl;
        cout<<"----------------------------"<<endl;
        cout<<ptr->getName()<<"'s Skill:"<<endl;
        for(int j = 0 ; j < 4 ;j++){
            cout<<"["<<j + 1<<"]"<<ptr->skill[j]<<endl;
        }
        cout<<endl<<mon[i].getName()<<"'s Skill:"<<endl;
        for(int k = 0 ; k < 4 ;k++){
           cout<<"["<<k + 1<<"]"<<mon[i].skill[k]<<endl;
        }
        cout<<"----------------------------"<<endl;
        battle(ptr,bag,Attack, enemyAttack,mon[i]);
        if(i == 10) cout<<"You win"<<endl;
        system("PAUSE");
        system("cls");
    }
    //bag.show_all();
    return 0;
}