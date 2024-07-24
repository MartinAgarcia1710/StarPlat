#ifndef BASE_H
#define BASE_H
#include <SFML/Graphics.hpp>
class Base {
public:
	Base();
	virtual ~Base();
	
	//para posicionar el ojeto
	void setPosition(float x, float y);
	sf::Vector2f getPosition();
	
	//Tamaño
	void setSize(float ancho, float alto);
	sf::Vector2f getSize() const;
	
	//renderizacion y actualizacion
	virtual void update(float deltaTime) = 0;
	virtual void draw(sf::RenderWindow& window);
	
protected:
	sf::RectangleShape shape;
	bool loadTexture(const std::string& path);
};

#endif

