#pragma once
#include "Weapon.h"
#include "Armor.h"


class Player {


private:
    int life = 20;
    int  maxlife = 100;
    int speed = 15;

    int mana = 100;
    int attack = 10;
    int defense = 10;
    int luck = 0;
    // All others RPG stats

    // Inventory

	Weapon weapon;
	Armor armor;

public :

    void DisplayPlayerStats();

    void TakeDamage(int damage);
	void Heal(int heal);
	void Attack(Player& target);

    bool IsAlive();

	// Getters and Setters
	int GetLife();
	void SetLife(int value);

};
