#include "Base.h"


	Base::Base() {
		// Inicialización por defecto
	}
	
	// Destructor
	Base::~Base() {
		// Cleanup si es necesario
	}
	
	// Establecer la posición del objeto
	void Base::setPosition(float x, float y) {
		shape.setPosition(x, y);
	}
	
	// Obtener la posición del objeto
	sf::Vector2f Base::getPosition() const {
		return shape.getPosition();
	}
	
	// Establecer el tamaño del objeto
	void Base::setSize(float ancho, float alto) {
		shape.setSize(sf::Vector2f(ancho, alto));
	}
	
	// Obtener el tamaño del objeto
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


