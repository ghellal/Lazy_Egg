#pragma once

#include <SFML/Graphics.hpp>
#include "Movable.h"

class Spoon : public Movable
{
public:
	Spoon(sf::Vector2u size, float posX, float posY, float speed);
	~Spoon();

	void Move(sf::Vector2u size);

private:
	float originalPosX, originalPosY;
	sf::Texture texture;
};
