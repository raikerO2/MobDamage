#pragma once
#include <string>

class Entity
{
private:
	int m_Hp, m_Power, m_Mana, m_Defence;
	bool m_isDead;
	const std::string m_Name;
public:
	enum stats : int {
		hp,power,mana,defence,isDead
	};
	Entity()
	{
		m_Hp = 0;
		m_Power = 0;
		m_Mana = 0;
		m_Defence = 0;
		m_isDead = false;
	}
	Entity(int hp, int mana) : m_Hp(hp), m_Mana(mana){ m_isDead = false; }
	Entity(const std::string name) : m_Name(name){ m_isDead = false; }
	
	//p1 attacked, p2 attacker.
	virtual int Attack(Entity& p1, Entity& p2);
	virtual const int GetAttribute(int att);
	virtual const std::string GetName();
	virtual bool SetAttribute(int att, int val);
	virtual void KillEntity(Entity& entity);
};