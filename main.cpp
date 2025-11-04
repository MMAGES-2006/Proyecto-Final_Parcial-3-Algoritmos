#include <iostream>
#include <math.h>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "Menu.hpp"

using namespace std;
using namespace sf;

int main()
{

	Renderwindow mainMENU(VideoMode(960, 720), "Menu", Style::Default);
	Menu Menu(mainMENU.getSize().x, mainMENU.getSize().y);
	RectangleShape fondo;
	fondo.setSize(vector2f(960, 720));
	Texture UpParking;
	if (!UpParking.loadFromFile())
	{
		cout << "File not founded :(";
	}
	fondo.setTexture(&UpParking);


}