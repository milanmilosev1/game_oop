#ifndef ENTITY_GUARD
#define ENTITY_GUARD

#include "dinstring.hpp"

class Entity{
protected:
    DinString name;
    int healthPoints;
    int attackDamage;
    DinString weapon;
    static int entityCount;
public:
    Entity() : name(""), healthPoints(100), attackDamage(0), weapon(""){
        ++entityCount;
    }
    Entity(const DinString&, int, int, const DinString&);
    Entity(const Entity&);

    void setName(DinString name){
        this->name = name;
    }

    void setHP(int healthPoints){
        this->healthPoints = healthPoints;
    }

    void setAD(int attackDamage){
        this->attackDamage = attackDamage;
    }

    void setWeapon(DinString weapon){
        this->weapon = weapon;
    }

    DinString getName() const {
        return name;
    }

    int getHP() const {
        return healthPoints;
    }

    int getAD() const {
        return attackDamage;
    }

    DinString getWeapon() const {
        return weapon;
    }

};

int Entity::entityCount = 0;

Entity::Entity(const DinString& ime, int hp, int ad, const DinString& wpn) : name(ime), healthPoints(hp), attackDamage(ad), weapon(wpn){
    ++entityCount;
}

Entity::Entity(const Entity& enObj) : name(enObj.name), healthPoints(enObj.healthPoints), attackDamage(enObj.attackDamage), weapon(enObj.weapon){
    ++entityCount;
}


#endif //ENTITY_GUARD