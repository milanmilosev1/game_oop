#ifndef ENEMY_HPP_INCLUDED
#define ENEMY_HPP_INCLUDED

#include "Entity.hpp"

class Enemy : public Entity{
private:
    static int enemyCounter;
public:
    Enemy(){++enemyCounter;}
    Enemy(const DinString&, int, int, const DinString&);
    Enemy(const Enemy& e) : Entity((Entity)e){++enemyCounter;}
    
    int getEnemyCount() const {
        return enemyCounter;
    }

    virtual void printEnemyInfo() const{
        std::cout << "Enemy name: " << name << std::endl;
        std::cout << "Enemy HP: " << healthPoints << std::endl;
        std::cout << "Enemy weapon: " << weapon << std::endl;
        std::cout << "Enemy attack damage: " << attackDamage << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }

    friend ostream& operator<<(ostream& os, const Enemy& e){
        os << "Enemy name: " << e.name << std::endl;
        os << "Enemy HP: " << e.healthPoints << std::endl;
        os << "Enemy weapon: " << e.weapon << std::endl;
        os << "Enemy attack damage: " << e.attackDamage << std::endl;
        os << "-----------------------------" << std::endl;
    }

};

int Enemy::enemyCounter = 0;

Enemy::Enemy(const DinString& ime, int hp, int ad, const DinString& wpn) : Entity(ime, hp, ad, wpn){
    ++enemyCounter;
}


#endif