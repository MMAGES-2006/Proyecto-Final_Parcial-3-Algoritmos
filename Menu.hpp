#ifndef Menu_h
#define Menu_h
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

g namespace std;
using namespace sf;

#define Max_menu 4

class Menu
{
	int menuSelected;
	Font font;
	Text mainMenu[Max_menu];	

public:
	Menu(float alto, float ancho);

	void dibujar(RenderWindow& window);
	void moveUp();
	void moveDown();
	
	int optSelected(); //recibe dato numerico para cierta opcion

	~Menu();
};

#endif
