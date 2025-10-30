#include "Menu.hpp"

Menu::Menu(float alto, float ancho)
{
mainMenu[0].setFont(font);
mainMenu[0].setString("Play");
mainMenu[0].setFillColor(Color::Purple);
mainMenu[0].setCharactersSize(70);
mainMenu[0].setPosition();

mainMenu[1].setFont(font);
mainMenu[1].setString("Options");
mainMenu[1].setFillColor(Color::Purple);
mainMenu[1].setCharactersSize(70);
mainMenu[1].setPosition();

mainMenu[1].setFont(font);
mainMenu[1].setString("Credits");
mainMenu[1].setFillColor(Color::Purple);
mainMenu[1].setCharactersSize(70);
mainMenu[1].setPosition();

mainMenu[1].setFont(font);
mainMenu[1].setString("Exit");
mainMenu[1].setFillColor(Color::Purple);
mainMenu[1].setCharactersSize(70);
mainMenu[1].setPosition();

menuSelected = -1;
} 

void Menu::moveUp()
{
	if (menuSelected<0)
	{
		menuSelected=0;
		mainMenu[menuSelected].setFillColor(Color::Purple);
		menuSelected--;
	}
	
	if (menuSelected<0)
	{
		menuSelected=3;
		mainMenu[menuSelected].setFillColor(Color::Pink);
	}
}

void Menu::moveDown()
{
	if (menuSelected>3)
	{
		menuSelected=3;
		mainMenu[menuSelected].setFillColor(Color::Purple);
		menuSelected++;
	}

	if (menuSelected>3)
	{
		menuSelected=0;
		mainMenu[menuSelected].setFillColor(Color::Pink);
	}
}
