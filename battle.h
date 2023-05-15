    #include "monster.h"
    #include "pokemon.h"
    #include "pokemonList.h"    

    void battle(pokemon *pok,list &bag,int Attack,int enemyAttack, monster enermy)
    {
        string name;
        int ID;
        string skill[4];
        pokemon* newpok;
        int dmg;
        int eDmg;
        for(int i = 0 ;i < 4;i++){
            skill[i] = enermy.skill[i];
        }

        name = enermy.getName();
        ID = bag.getSize()+1;

        while( ( enermy.hp > 0 ) && ( pok->hp > 0) )
        {
            cout << "Attack number: ";
            //bag.show_all();
            cin >> Attack;
            cout << endl;

            if ( ( Attack == 1 ) || ( Attack == 2 ) ){
                dmg = rand() % 40 + 15;
                enermy.hp = enermy.hp - dmg;
                if ( enermy.hp < 1 )
                {
                    cout <<pok->getName() <<" Wins!" << endl;
                    cout << endl;
                    newpok = new pokemon(ID,name,skill[1],skill[2],skill[3],skill[4]);
                    bag.add_pokemon(newpok);
                    cout << "Your " << pok->getName() <<" is evoling into " ;
                    pok->evo();
                    cout << pok->getName()<<endl;
                    cout << newpok->getName() <<" will be your power!!!" << endl; 
                    break;
                }
                cout << enermy.getName() <<"'s Health: " << enermy.hp << "%" << endl;
                cout << pok->getName()<<"'s Health: " << pok->hp << "%" << endl;
                cout << "______________________________________________" << endl;
                cout << endl;
            }

            if ( ( Attack == 3 ) || ( Attack == 4 ) ){
                dmg = rand() % 8 + 8;
                enermy.hp = enermy.hp - dmg;
                if ( enermy.hp < 1 )
                {
                    cout <<pok->getName() <<" Wins!" << endl;
                    cout <<endl;
                    newpok = new pokemon(ID,name,skill[1],skill[2],skill[3],skill[4]);
                    bag.add_pokemon(newpok);
                    cout << newpok->getName() <<" will be your power!!!"<<endl; 
                    
                    break;
                }
                cout << enermy.getName()<<"'s Health: " << enermy.hp << endl;
                cout << pok->getName()<<"'s Health: " << pok->hp << endl;
                cout << "______________________________________________" << endl;
                cout << endl;
            }

            //enemy's turn
            enemyAttack = rand() % 3 + 2;
            if ( ( enemyAttack == 2) || ( enemyAttack == 3) ){
                cout << enermy.getName()<<" uses " << enermy.skill[enemyAttack - 1] << endl;
                cout << endl;

                eDmg = rand() % 7 + 7;
                pok->hp = pok->hp - eDmg;
                if ( pok->hp < 1)
                {
                    cout << enermy.getName()<<" Wins!" << endl;
                    cout << endl;
                    bag.minusSize();
                    if (bag.getSize() != 0) {
                        // Move to the next Pokemon in the list
                        pok = pok->movenext();
                        cout << "Go get Em, " << pok->getName() << "!!!" << endl;
                        cout<<pok->getName()<<"'s Skill:"<<endl;
                        for(int j = 0 ; j < 4 ;j++){
                            cout<<"["<<j + 1<<"]"<<pok->skill[j]<<endl;
                        }
                        battle(pok,bag,Attack, enemyAttack,enermy);
                    } else {
                        cout << "You have no more Pokemon left!" << endl;
                        break;
                    }
                }
                cout << pok->getName()<<"'s Health: " << pok->hp << "%" << endl;
                cout << enermy.getName()<<"'s Health: " << enermy.hp << "%" << endl;
                cout << "______________________________________________" << endl;
                cout << endl;
            }
            if ( ( enemyAttack == 1) || ( enemyAttack == 4) )
            {
                cout << enermy.getName() <<" uses " << enermy.skill[enemyAttack - 1] << endl;
                cout << endl;

                eDmg = rand() % 14 + 14;
                pok->hp = pok->hp - eDmg;
                if ( pok->hp < 1)
                {
                    cout << enermy.getName() <<" Wins!" << endl;
                    cout << endl;
                    bag.minusSize();
                    if (bag.getSize() != 0) {
                        // Move to the next Pokemon in the list
                        pok = pok->movenext();
                        cout << "Go get Em, " << pok->getName() << "!!!" << endl;
                        cout<<pok->getName()<<"'s Skill:"<<endl;
                        for(int j = 0 ; j < 4 ;j++){
                            cout<<"["<<j + 1<<"]"<<pok->skill[j]<<endl;
                        }
                        battle(pok,bag,Attack, enemyAttack,enermy);
                    } else {
                        cout << "You have no more Pokemon left!" << endl;
                        break;
                    }
                }
                cout << pok->getName() <<"'s Health: " << pok->hp << "%" << endl;
                cout << enermy.getName() <<"'s Health: " << enermy.hp << "%" << endl;
                cout << "______________________________________________" << endl;
                cout << endl;
            }
        }

    }