#ifndef ARENA_HPP_INCLUDED
#define ARENA_HPP_INCLUDED

#include "list.hpp"
#include "Entity.hpp"
#include "Enemy.hpp"

template <int BROJ_IGRACA>
class Arena{
private:
    List<Enemy*> enemyList;
public:
    Arena(){}

    bool addEnemy(Enemy* e){
        if(enemyList.size() >= BROJ_IGRACA){
            return false;
        }
        Enemy* ep;
        for(int i = 1; i < enemyList.size() + 1; ++i){
            enemyList.read(i, ep);
            if(e->getName() == ep->getName()){
                return false;
            }
        }
        return enemyList.add(enemyList.size() + 1, e);
    }

    bool removeEnemy(Enemy* e){
        if(enemyList.size() = 0){
            return false;
        }
        Enemy* ep;
        for(int i = 1; i < enemyList.size(); ++i){
            enemyList.read(i, ep);
            if(e->getName() == ep->getName()){
                return enemyList.remove(i);
            }
        }
        return false;
    }

    friend ostream& operator<<(ostream& os, const Arena<BROJ_IGRACA>& ar){
        os << "Lista neprijatelja: " << endl;
        Enemy* ep;
        for(int i = 1; i <= ar.enemyList.size(); ++i){
            ar.enemyList.read(i, ep);
            os << *ep << endl;
        }
        return os;
    }

};


#endif