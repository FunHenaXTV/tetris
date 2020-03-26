#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

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

void convector(RectangleShape id[5], int arr[10]) {
	for (int i = 0; i < 10; i += 2) {
		arr[i] = id[i / 2].getPosition().x / 50;
		arr[i + 1] = id[i / 2].getPosition().y / 50;
	}
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

void sign_Z(RectangleShape id[5], int arr[10]) {
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
	convector(id, arr);
}





int main() {
	RenderWindow window(VideoMode(800, 800), "Gun");
	RectangleShape active_shape[5];
	Color **Field = new Color* [16];
	int active[10];
	for (int i = 0; i < 16; i++) {
		Field[i] = new Color[16];
	}
	sign_Z(active_shape, active);


	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			Field[i][j] = Color::White;
		}
	}
	for (int i = 0; i < 10; i += 2) {
		Field[active[i]][active[i+1]] = active_shape[0].getFillColor();
	}
	RectangleShape lines[33];
	for (int i = 0; i <= 800; i += 50) {
		lines[i/50].setSize(Vector2f(800, 2));
		lines[i/50].setPosition(Vector2f(0, i));
		lines[i/50].setFillColor(Color::White);
	}
	for (int i = 0; i < 800; i += 50) {
		lines[i / 50+16].setSize(Vector2f(2, 800));
		lines[i / 50+16].setPosition(Vector2f(i, 0));
		lines[i / 50+16].setFillColor(Color::White);
	}


	

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			if (event.type == Event::KeyPressed) {
				int ind = 0;
				if (Keyboard::isKeyPressed(Keyboard::Right)) {
					int max = -1;
					int max_i = -1;
					for (int i = 0; i < 10; i+=2) {
						if (active[i] >= max) {
							max = active[i];
							max_i = i;
						}
					}
					if (max >= 15) {
						ind = 1;
					} else if (Field[max + 1][active[max_i + 1]] != Color::White) {
						ind = 1;
					}
					
					cout << ind << endl;
					if (ind == 0) {
						for (int i = 0; i < 10; i += 2) {
							Field[active[i]][active[i+1]] = Color::White;
							active[i] += 1;
							Field[active[i]][active[i+1]] = active_shape[0].getFillColor();
							active_shape[i / 2].move(50, 0);

						}
					}
					ind = 0;

				}
				if (Keyboard::isKeyPressed(Keyboard::Left)) {
					int max = 100;
					int max_i = -1;
					for (int i = 0; i < 10; i += 2) {
						if (active[i] <= max) {
							max = active[i];
							max_i = i;
						}
					}
					if (max <= 0) {
						ind = 1;
					}
					else if (Field[max - 1][active[max_i + 1]] != Color::White) {
						ind = 1;
					}

					cout << ind << endl;
					if (ind == 0) {
						for (int i = 0; i < 10; i += 2) {
							Field[active[i]][active[i + 1]] = Color::White;
							active[i] -= 1;
							Field[active[i]][active[i + 1]] = active_shape[0].getFillColor();
							active_shape[i / 2].move(-50, 0);

						}
					}
					ind = 0;
				}
				if (Keyboard::isKeyPressed(Keyboard::Space)) {
					cout << "Space" << endl;
				}
			}
		}

		window.clear();

		for (int i = 0; i < 5; i++) {
			window.draw(active_shape[i]);
		}

		for (int i = 0; i < 33; i++) {
			window.draw(lines[i]);
		}

		window.display();
	}
	
	for  (int i = 0; i < 16; i++)
	{
		delete[] Field[i];
	}

	delete [] Field;

}