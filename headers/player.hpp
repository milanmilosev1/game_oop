#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

#include "Entity.hpp"

class Player : public Entity{
private:
    DinString specialAttack;
    int specialAtkDmg;
public:
    Player() : specialAttack("none"), specialAtkDmg(0){}
    Player(const DinString& ime, int hp, int ad, const DinString& weapon, const DinString& SA, int SAD) : Entity(ime, hp, ad, weapon), specialAttack(SA), specialAtkDmg(SAD){}
    Player(const Player& p) : Entity((Entity)p), specialAttack(p.specialAttack), specialAtkDmg(p.specialAtkDmg){}

    void setSpecialAttack(DinString specialAttack){
        this->specialAttack = specialAttack;
    }

    void setSpecialAttackDamage(int specialAtkDmg){
        this->specialAtkDmg = specialAtkDmg;
    }

    DinString getSpAtk() const {
        return specialAttack;
    }

    int getSpAtkDmg() const {
        return specialAtkDmg;
    }

    void attack(){
        setAD(attackDamage);
    }

};


#endif