#include "Player.h"
#include <iostream>

void Player::DisplayPlayerStats() {

    std::cout << "Player Life : " << life << std::endl;
    std::cout << "Player maxLife : " << maxlife << std::endl;
    std::cout << "Player Speed : " << speed << std::endl;
    std::cout << "Player Mana : " << mana << std::endl;
    std::cout << "Player Attack : " << attack << std::endl;
    std::cout << "Player Defense : " << defense << std::endl;
    std::cout << "Player Luck : " << luck << std::endl;
    std::cout << std::endl;
}

void Player::TakeDamage(int damage) {

    life -= damage;

    if (life < 0) {
        life = 0;
    }

}

bool Player::IsAlive() {

    return life > 0;
}