﻿#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

int main()
{
	const int n = 5;

	RenderWindow window(VideoMode(1400, 700), "SFML Shapes");

	//Создаём круги
	CircleShape circle[n];
	for (int i = 0; i < n; i++)
	{
		circle[i].setRadius(50.f);
		circle[i].setPosition(100.f * i, 100.f);
		circle[i].setFillColor(Color::Green);
	}

	//Создаём треугольники
	CircleShape triangle[n];
	for (int i = 0; i < n; i++)
	{
		triangle[i].setRadius(50.f);
		triangle[i].setPosition(100.f * i, 200.f);
		triangle[i].setFillColor(Color::Red);
		triangle[i].setPointCount(3);
	}

	//Создаём прямоугольники
	RectangleShape rectangle[n];
	for (int i = 0; i < n; i++)
	{
		rectangle[i].setSize(Vector2f(90, 100));
		rectangle[i].setFillColor(Color::Blue);
		rectangle[i].setPosition(100.f * i, 300.f);
	}

	//Создаём линии
	RectangleShape line[n];
	for (int i = 0; i < n; i++)
	{
		line[i].setSize(Vector2f(90, 2));
		line[i].setFillColor(Color::Yellow);
		line[i].setPosition(100.f * i, 425.f);

	}
	//Вывод
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		for (int i = 0; i < n; i++)
		{
			window.draw(circle[i]);
			window.draw(triangle[i]);
			window.draw(rectangle[i]);
			window.draw(line[i]);
		}
		window.display();
	}
}