#include "entity.h"

void Entity::KillEntity(Entity& entity)
{
	entity.m_isDead = true;
}
int Entity::Attack(Entity& p1, Entity& p2)
{
	if (p1.m_Defence <= 0)
	{
		p1.m_Hp -= p2.m_Power;
	}
	else
	{
		p1.m_Defence -= p2.m_Power;
	}
	if (p1.m_Hp <= 0)
	{
		p1.SetAttribute(p1.defence, 0);
		p1.SetAttribute(p1.hp, 0);
		KillEntity(p1);
	}
	return p1.m_Hp;
}
bool Entity::SetAttribute(int att, int val)
{
	switch (att)
	{
	case power:
		m_Power = val;
		break;
	case mana:
		m_Mana = val;
		break;
	case hp:
		m_Hp = val;
		break;
	case defence:
		m_Defence = val;
		break;
	default:
		return false;
	}
}
const int Entity::GetAttribute(int att)
{
	switch (att)
	{
	case hp:
		return m_Hp;
	case mana:
		return m_Mana;
	case power:
		return m_Power;
	case defence:
		return m_Defence;
	case isDead:
		return m_isDead;
	default:
		return 0;
	}
}
const std::string Entity::GetName()
{
	return m_Name;
}