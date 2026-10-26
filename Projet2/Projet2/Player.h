#pragma once
class Player {

public:

    int life = 20;
    int  maxlife = 100;
    int speed = 15;

    int mana = 100;
    int attack = 10;
    int defense = 10;
    int luck = 0;
    // All others RPG stats

    // Inventory


    void DisplayPlayerStats();

    void TakeDamage(int damage);

    bool IsAlive();




};
