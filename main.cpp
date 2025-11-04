#include <iostream>
#include <math.h>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "Menu.hpp"

using namespace std;
using namespace sf;

int main()
{


	Renderwindow mainMENU(VideoMode(1080, 920), "Menu", Style::Default);
	Menu Menu(mainMENU.getSize().x, mainMENU.getSize().y);
	RectangleShape fondo;
	fondo.setSize(vector2f(1080, 920));
	Texture UpParking;
	if (!UpParking.loadFromFile())
	{
		cout << "File not founded :(";
	}
	fondo.setTexture(&UpParking);


	vector<Texture> texturas;
	Texture Carro1;
	if (!Carro1.loadFromFile())
	{
		cout << "Textura fallida, revise el archivo :(" << endl;
	}
	texturas.push_back(Carro1);
	Texture Carro1v2;
	if (!Carro1.loadFromFile())
	{
		cout << "Textura fallida, revise el archivo :(" << endl;
	}
	texturas.push_back(Carro1v2);

	Texture Carro2;
	if (!Carro2.loadFromFile())
	{
		cout << "Textura fallida, revise el archivo :(" << endl;
	}
	texturas.push_back(Carro2);
	Texture Carro2v2;
	if (!Carro2.loadFromFile())
	{
		cout << "Textura fallida, revise el archivo :(" << endl;
	}
	texturas.push_back(Carro2v2);

	Texture Carro3;
	if (!Carro3.loadFromFile())
	{
		cout << "Textura fallida, revise el archivo :(" << endl;
	}
	texturas.push_back(Carro3);
	Texture Carro3v2;
	if (!Carro3.loadFromFile())
	{
		cout << "Textura fallida, revise el archivo :(" << endl;
	}
	texturas.push_back(Carro3v2);

	Texture Carro4;
	if (!Carro4.loadFromFile())
	{
		cout << "Textura fallida, revise el archivo :(" << endl;
	}
	texturas.push_back(Carro4);
	Texture Carro4v2;
	if(!Carro4.loadFromFile())
	{
		cout << "Textura fallida, revise el archivo :(" << endl;
	}
	texturas.push_back(Carro4v2);


	while(mainMENU.isOpen())
	{
		Event evento;
		while(mainMENU.pollEvent(evento))
		{
			if(evento.type == Event::Closed)
			{
				mainMENU.close(); 

			}
			if(evento.type == Event::KeyPressed)
			{
				if(evento.key.code == KeyBoard::Up)
				{
					Menu.moveUp();
					break;

				}
				if(evento.key.code == KeyBoard::Down)
				{
					Menu.moveDown();
					break;

				}
				if (evento.key.code == KeyBoard::return)
				{
					int men = Menu.optSelected();

					if(men == 0)
					{
						mainMENU.close(); 


					}
					else if (men == 1)
					{
						RenderWindow options(VideoMode(1080, 920), "Options")
						while (options.isOpen())
						{
							Event eventoB;
							while (options.pollEvent(eventoB))
							{
								if (eventB.type == Event::Closed)
								{
									options.close();
								}
							}
						}
					}

				}

			}
		}
	}


}