
#include <iostream>
#include "Player.h"
#include "Weapon.h"
#include "Armor.h"
#include <vector>



int main() {

    std::string s = "Weapon name";

    s = "Legendary Sword";
	s += " of the Dragon";

	std::cout << s << std::endl;

	std::vector<int> v;

    Player player;
    player.DisplayPlayerStats();
    player.TakeDamage(50);
    player.DisplayPlayerStats();

	player.SetLife(-50);

    player.DisplayPlayerStats();

	player.Heal(30);    
	player.DisplayPlayerStats();    


    return 0;
}