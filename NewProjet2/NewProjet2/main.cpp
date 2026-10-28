
#include <iostream>
#include "Animal.h"
#include "Chien.h"
#include "Chat.h"
#include <vector>


int main()
{
    Animal animal;
	Chien chien;
	Chat chat;

	std::vector<Animal*> animaux;
	animaux.push_back(&animal);
	animaux.push_back(&chien);
	animaux.push_back(&chat);
	for (Animal* animal : animaux) {
		animal->Cri();
	}
	return 0;
}
