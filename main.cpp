#include <iostream>
#include "headers/arena.hpp"
#include "headers/Enemy.hpp"

using namespace std;

int main(){
    Enemy enemy1("Zarko", 100, 20, "Mac");
    Enemy enemy2("Marko", 100, 20, "Mac");
    Arena <12> a;
    a.addEnemy(&enemy1);
    a.addEnemy(&enemy2);
    cout << a << endl;
    return 0;
}