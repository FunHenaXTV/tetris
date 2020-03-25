#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
#include <ctime>


using namespace sf;
using namespace std;



Color create_random_color() {
	srand(time(NULL));
	int i = rand() % 5;
	for (int j = 0; j < rand() % 10; j++) {
		for (int j1 = 0; j < rand() % 100; j++) {
			i = rand() % 5;
		}
		i = rand() % 5;
	}
	if (i == 0) {
		return Color::Blue;
	}
	else if (i == 1) {
		return Color::Magenta;
	}
	else if (i == 2) {
		return Color::Cyan;
	}
	else if (i == 3) {
		return Color::Green;
	}
	else if (i == 4) {
		return Color::Red;
	}
	return Color::Black;
}
int create_random_pos() {
	srand(time(NULL));
	int i = rand() % 800;
	for (int j = 0; j < rand() % 10; j++) {
		for (int j1 = 0; j < rand() % 100; j++){
			i = rand() % 800;
		}
		i = rand() % 800;
	}
	i = i - i % 50;
	return i;
}


void sign_L(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos >= 750) {
		pos = 700;
	}
	for (int i = 0; i < 4; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos, 200-i*50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[0].getPosition().x+50, id[0].getPosition().y));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}

void sign_F(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos == 0) {
		pos = 50;
	}
	else if(pos >= 750) {
		pos = 700;
	}
	for (int i = 0; i < 3; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos, 200 - i * 50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[2].getPosition().x + 50, id[2].getPosition().y));
	id[3].setFillColor(color);
	id[3].setOutlineColor(Color::Black);
	id[3].setOutlineThickness(1);

	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[1].getPosition().x - 50, id[1].getPosition().y));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}

void sign_I(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();

	for (int i = 0; i < 5; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos, 250 - i * 50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}

}

void sign_N(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos >= 750) {
		pos = 700;
	}
	for (int i = 0; i < 3; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos, 250 - i * 50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[2].getPosition().x + 50, id[2].getPosition().y));
	id[3].setFillColor(color);
	id[3].setOutlineColor(Color::Black);
	id[3].setOutlineThickness(1);

	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[3].getPosition().x, id[3].getPosition().y-50));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}
void sign_P(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos == 0) {
		pos = 50;
	}
	for (int i = 0; i < 3; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos, 250 - i * 50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[1].getPosition().x - 50, id[1].getPosition().y));
	id[3].setFillColor(color);
	id[3].setOutlineColor(Color::Black);
	id[3].setOutlineThickness(1);

	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[0].getPosition().x - 50, id[0].getPosition().y));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}
void sign_T(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos == 0) {
		pos = 50;
	}
	else if (pos >= 750) {
		pos = 700;
	}
	for (int i = 0; i < 3; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos, 250 - i * 50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[2].getPosition().x + 50, id[2].getPosition().y));
	id[3].setFillColor(color);
	id[3].setOutlineColor(Color::Black);
	id[3].setOutlineThickness(1);

	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[2].getPosition().x - 50, id[2].getPosition().y));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}
void sign_U(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos >= 700) {
		pos = 650;
	}
	for (int i = 0; i < 3; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos+i*50, 150));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[0].getPosition().x, id[0].getPosition().y-50));
	id[3].setFillColor(color);
	id[3].setOutlineColor(Color::Black);
	id[3].setOutlineThickness(1);

	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[2].getPosition().x, id[2].getPosition().y-50));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}
void sign_V(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos >= 700) {
		pos = 650;
	}
	for (int i = 0; i < 3; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos + i * 50, 150));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[0].getPosition().x, id[0].getPosition().y - 50));
	id[3].setFillColor(color);
	id[3].setOutlineColor(Color::Black);
	id[3].setOutlineThickness(1);

	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[0].getPosition().x, id[2].getPosition().y - 100));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}
void sign_W(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos >= 700) {
		pos = 650;
	}
	for (int i = 0; i < 2; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos, 150 + i * 50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[2].setSize(Vector2f(50, 50));
	id[2].setPosition(Vector2f(id[1].getPosition().x+50, id[1].getPosition().y));
	id[2].setFillColor(color);
	id[2].setOutlineColor(Color::Black);
	id[2].setOutlineThickness(1);

	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[2].getPosition().x, id[2].getPosition().y + 50));
	id[3].setFillColor(color);
	id[3].setOutlineColor(Color::Black);
	id[3].setOutlineThickness(1);

	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[3].getPosition().x + 50, id[3].getPosition().y));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}

void sign_X(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos >= 700) {
		pos = 650;
	}
	for (int i = 0; i < 3; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos + i*50, 150));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}

	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[1].getPosition().x, id[1].getPosition().y - 50));
	id[3].setFillColor(color);
	id[3].setOutlineColor(Color::Black);
	id[3].setOutlineThickness(1);

	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[1].getPosition().x, id[1].getPosition().y + 50));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}

void sign_Y(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos >= 750) {
		pos = 700;
	}
	for (int i = 0; i < 4; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos, 150 + i*50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}


	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[1].getPosition().x - 50, id[1].getPosition().y));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}

void sign_Z(RectangleShape id[5]) {
	int pos = create_random_pos();
	Color color = create_random_color();
	if (pos >= 750) {
		pos = 700;
	}
	else if(pos == 0) {
		pos = 50;
	}
	for (int i = 0; i < 3; i++) {
		id[i].setSize(Vector2f(50, 50));
		id[i].setPosition(Vector2f(pos, 150 + i * 50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}

	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[0].getPosition().x - 50, id[0].getPosition().y));
	id[3].setFillColor(color);
	id[3].setOutlineColor(Color::Black);
	id[3].setOutlineThickness(1);

	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[2].getPosition().x + 50, id[2].getPosition().y));
	id[4].setFillColor(color);
	id[4].setOutlineColor(Color::Black);
	id[4].setOutlineThickness(1);
}

int main() {
	RenderWindow window(VideoMode(800, 800), "Gun");
	RectangleShape markup[33];
	RectangleShape G[5];
	sign_Z(G);
	
	for (int i = 0; i <= 800; i += 50) {
		markup[i / 50].setFillColor(Color::White);
		markup[i / 50].setSize(Vector2f(2, 800));
		markup[i / 50].setPosition(Vector2f(i, 0));
	}
	for (int i = 0; i <= 800; i += 50) {
		markup[i / 50 + 16].setFillColor(Color::White);
		markup[i / 50 + 16].setSize(Vector2f(800, 2));
		markup[i / 50 + 16].setPosition(Vector2f(0, i));
	}
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			if (event.type == Event::KeyPressed) {
				if (Keyboard::isKeyPressed(Keyboard::Right)) {
					cout << "Right" << endl;
				}
				if (Keyboard::isKeyPressed(Keyboard::Left)) {
					cout << "Left" << endl;
				}
			}
		}
		for (int i = 0; i < 33; i++){
			window.draw(markup[i]);
		}
		for (int i= 0; i < 5; i++) {
			window.draw(G[i]);
		}
		window.display();
	}
	
}