#ifndef MONSTER_H
#define MONSTER_H
#include <SFML/Graphics.hpp>


class Monster
{
public:
    Monster();
    ~Monster();

    bool isActive;
    Monster(int hp, float speed, int points);
    void loadTexture();
    void slowed(float slowDown);
    void unslow();
    void hit(int damages);


protected:
    float m_speed;
    float m_actualSpeed;
    int m_hp;
    int m_points;

    bool isDead;

    sf::Texture texture;
    static sf::Sprite monster;



};

#endif // MONSTER_H
