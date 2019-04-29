//Turn base npc attack system;
#include <iostream>
#include "entity.h"
#include "engine.h"
#include <Windows.h>

int main()
{
	Engine engine;
	int h, m, d, po;
	std::cout << "Enemy\n";
	std::cout << "hp,mana,defence,power: ";
	std::cin >> h >> m >> d >> po;
	Entity e("Enemy");
	e.SetAttribute(e.hp, h);
	e.SetAttribute(e.mana, m);
	e.SetAttribute(e.defence, d);
	e.SetAttribute(e.power, po);

	int h1, m1, d1, po1;
	std::cout << "Player\n";
	std::cout << "hp,mana,defence,power: ";
	std::cin >> h1 >> m1 >> d1 >> po1;
	Entity p("Player");
	p.SetAttribute(p.hp, h1);
	p.SetAttribute(p.mana, m1);
	p.SetAttribute(p.defence, d1);
	p.SetAttribute(p.power, po1);
	
	Sleep(2000);
	std::cout << "player hp left: " << e.Attack(p, e) << std::endl;
	std::cout << "player defence left: " << p.GetAttribute(p.defence) << std::endl;
	std::cout << "player's death status: " << p.GetAttribute(p.isDead) << std::endl;
	

	std::system("PAUSE");
}