
#include <iostream>
#include "Player.h"



int main() {

    Player player;
    player.DisplayPlayerStats();
    player.TakeDamage(50);
    player.DisplayPlayerStats();



    return 0;
}