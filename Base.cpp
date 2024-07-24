#include "Base.h"


	Base::Base() {
		// Inicializaci�n por defecto
	}
	
	// Destructor
	Base::~Base() {
		// Cleanup si es necesario
	}
	
	// Establecer la posici�n del objeto
	void Base::setPosition(float x, float y) {
		shape.setPosition(x, y);
	}
	
	// Obtener la posici�n del objeto
	sf::Vector2f Base::getPosition() const {
		return shape.getPosition();
	}
	
	// Establecer el tama�o del objeto
	void Base::setSize(float ancho, float alto) {
		shape.setSize(sf::Vector2f(ancho, alto));
	}
	
	// Obtener el tama�o del objeto
	sf::Vector2f Base::getSize() const {
		return shape.getSize();
	}

	
	// Cargar la textura
	bool Base::loadTexture(const std::string& path) {
		if (texture.loadFromFile(path)) {
			shape.setTexture(&texture);
			return true;
		}
		return false;
	}
	
	// Dibujar el objeto en la ventana
	void Base::draw(sf::RenderWindow& window) {
		window.draw(shape);
	}


