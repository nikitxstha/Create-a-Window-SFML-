#include<SFML/Graphics.hpp>
#include<iostream>

using namespace std;
using namespace sf;

int main()
{
	//Create Window
	RenderWindow window(VideoMode({ 1200,800 }), "My Window");

	//Infinity Loop to display window unless closed
	while (window.isOpen()) {

		//Loop to handle events like Closing Window/Resizing Window/Taking Keyboard/Mouse Input
		while (optional event = window.pollEvent()) {

			//To close window
			if (event->is<Event::Closed>()) {
				window.close();
			}
		}
		//Set Background Color
		window.clear(Color::Black);

		//Display Window
		window.display();
	}

}
