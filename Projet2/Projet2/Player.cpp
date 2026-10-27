#include "Player.h"
#include "Weapon.h"
#include "Armor.h"
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

	int finalAttack = damage - defense;

	if (finalAttack < 0) {
		finalAttack = 0;
	}
    
	SetLife(GetLife() - finalAttack);
}

void Player::Heal(int heal) {

	SetLife(GetLife() + heal);
}

void Player::Attack(Player& target) {

	int finalAttack = attack + weapon.GetAttack();

	if (finalAttack < 0) {
		finalAttack = 0;
	}
	target.TakeDamage(finalAttack);
}

bool Player::IsAlive() {

    return life > 0;
}

int Player::GetLife() {
	return life;
}

void Player::SetLife(int value) {
	life = value;

	if (life < 0) {
		life = 0;
	}
	if (life > maxlife) {
		life = maxlife;
	}
}