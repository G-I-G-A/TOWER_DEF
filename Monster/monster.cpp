#include "monster.h"

Monster::Monster()
{
    m_hp = 100;
    m_speed = 100.f;
    m_points = 10;
    isDead = false;
    loadTexture();
}

Monster::Monster(int hp, float speed, int points)
{
    m_hp = hp;
    m_speed = speed;
    m_points = points;
}

void Monster::loadTexture()
{
    //a voir quel mouvement on prend
    //texture.loadFromFile("C:/Users/julie/Documents/Exos/TOWER_DEF/Assets/Monsters/monster.png")
    monster.setTexture(texture);
}

void Monster::slowed(float slowDown)
{
    m_speed -= slowDown;
}

void Monster::unslow()
{
    m_speed = 100.0f;
}

void Monster::hit(int damages)
{
    m_hp -= damages;
    if (m_hp <= 0)
        isDead = true;
}

