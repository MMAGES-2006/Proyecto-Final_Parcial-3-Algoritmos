#ifndef Menu_h
#define Menu_h
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>


using namespace std;
using namespace sf;

#define Max_menu 4

class Menu
{
private:
	int menuSelected;
	Font font();
	Text mainMenu[Max_menu];	

public:
	Menu(float alto, float ancho);

	void dibujar(RenderWindow& window);
	void moveUp(); 
	void moveDown();
	
	int optSelected();

	~Menu();
};

#endif
