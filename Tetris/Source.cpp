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
		id[i].setPosition(Vector2f(pos, i*50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[4].setSize(Vector2f(50, 50));
	id[4].setPosition(Vector2f(id[3].getPosition().x+50, id[3].getPosition().y));
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
		id[i].setPosition(Vector2f(pos, i * 50));
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
		id[i].setPosition(Vector2f(pos, i * 50));
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
		id[i].setPosition(Vector2f(pos, i * 50 + 50));
		id[i].setFillColor(color);
		id[i].setOutlineColor(Color::Black);
		id[i].setOutlineThickness(1);
	}
	id[3].setSize(Vector2f(50, 50));
	id[3].setPosition(Vector2f(id[0].getPosition().x + 50, id[0].getPosition().y));
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
		id[i].setPosition(Vector2f(pos, i * 50));
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
		id[i].setPosition(Vector2f(pos, i * 50));
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
		id[i].setPosition(Vector2f(pos+i*50, 50));
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
		id[i].setPosition(Vector2f(pos + i * 50, 100));
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
		id[i].setPosition(Vector2f(pos, i * 50));
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
		id[i].setPosition(Vector2f(pos + i*50, 50));
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
		id[i].setPosition(Vector2f(pos, i*50));
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
		id[i].setPosition(Vector2f(pos, i * 50));
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

void call_random_func(RectangleShape active_shape[5], int active[10]) {
	srand(time(NULL));
	int i = rand() % 13;
	for (int j = 0; j < rand() % 100; j++) {
		for (int k = 0; k < rand() % 100; j++) {
			i = rand() % 13;
		}
	}
	if (i == 0) {
		sign_F(active_shape);
		convector(active_shape, active);
	}
	else if (i == 1) {
		sign_I(active_shape);
		convector(active_shape, active);
	}
	else if (i == 2) {
		sign_L(active_shape);
		convector(active_shape, active);
	}
	else if (i == 3) {
		sign_N(active_shape);
		convector(active_shape, active);
	}
	else if (i == 4) {
		sign_U(active_shape);
		convector(active_shape, active);
	}
	else if (i == 5) {
		sign_V(active_shape);
		convector(active_shape, active);
	}
	else if (i == 6) {
		sign_W(active_shape);
		convector(active_shape, active);
	}
	else if (i == 7) {
		sign_W(active_shape);
		convector(active_shape, active);
	}
	else if (i == 8) {
		sign_X(active_shape);
		convector(active_shape, active);
	}
	else if (i == 9) {
		sign_Z(active_shape);
		convector(active_shape, active);
	}
	else if (i == 10) {
		sign_Y(active_shape);
		convector(active_shape, active);
	}
	else if (i == 11) {
		sign_T(active_shape);
		convector(active_shape, active);
	}
	else if (i == 12) {
		sign_P(active_shape);
		convector(active_shape, active);
	}

}



int main() {
	RenderWindow window(VideoMode(800, 800), "Gun");
	RectangleShape active_shape[5];
	Color **Field = new Color* [16];
	RectangleShape** Field_shape = new RectangleShape * [16];

	int active[10];
	for (int i = 0; i < 16; i++) {
		Field[i] = new Color[16];
		Field_shape[i] = new RectangleShape[16];
	}
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			Field_shape[i][j].setSize(Vector2f(50, 50));
			Field_shape[i][j].setPosition(Vector2f(i * 50, j * 50));
			Field_shape[i][j].setFillColor(Color::White);
			Field_shape[i][j].setOutlineThickness(2);
			Field_shape[i][j].setOutlineColor(Color::Black);
		}
	}

	call_random_func(active_shape, active);
	int iter = 1;
	int dead = 0;

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

	Field_shape[1][15].setFillColor(Color::Magenta);
	Field_shape[15][1].setFillColor(Color::Yellow);


	

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

		if (iter % 25 == 0) {
			int max = -1;
			int i_max = -1;
			int x[5];
			int y_max[5];
			int len = 0;
			int a = 0;
			for (int i = 0; i < 10; i += 2) {
				for (int j = 0; j < len; j++) {
					if (active[i] == x[j]) {
						a = 1;
						if (active[i+1] >= y_max[j]) {
							y_max[j] = active[i+1];
						}
					}
				}
				if (a == 0) {
					x[len] = active[i];
					y_max[len] = active[i + 1];
					len++;
				}
				if (active[i + 1] > max) {
					max = active[i + 1];
					i_max = i;
				}
				a = 0;
			}
			a = 0;
			for (int i = 0; i < len; i++) {
				if (Field[x[i]][y_max[i]+1] != Color::White) {
					a = 1;
				}
			}
			
			int ind = 0;

			if (max < 15 && a == 0) {
				for (int i = 0; i < 10; i += 2) {
					Field[active[i]][active[i + 1]] = Color::White;
					active[i + 1] += 1;
					Field[active[i]][active[i + 1]] = active_shape[0].getFillColor();
					active_shape[i / 2].move(0, 50);
				}
			} else {
				for (int i = 0; i < 5; i++) {
					Field[int(active_shape[i].getPosition().x)/50][int(active_shape[i].getPosition().y)/50] = active_shape[0].getFillColor();
					Field_shape[int(active_shape[i].getPosition().x)/50][int(active_shape[i].getPosition().y)/50].setFillColor(active_shape[0].getFillColor());
					dead = 1;
				}
				
			}
			iter = 1;
		}
		else {
			iter += 1;
		}

		for (int i = 0; i < 5; i++) {
			window.draw(active_shape[i]);
		}

		for (int i = 0; i < 16; i++) {
			for (int j = 0; j < 16; j++) {
				if (Field_shape[i][j].getFillColor() != Color::White) {
					window.draw(Field_shape[i][j]);
				}
			}
		}

		for (int i = 0; i < 33; i++) {
			window.draw(lines[i]);
		}

		

		
		window.display();


		if (dead == 1) {
			dead = 0;
			for (int i = 0; i < 16; i++) {
				int a = 0;
				for (int j = 0; j < 16; j++) {
					if (Field[j][i] != Color::White) {
						a++;
					}
				}
				if (a == 16) {
					for (int j = 0; j < 16; j++) {
						Field[j][i] = Color::White;
						Field_shape[j][i].setFillColor(Color::White);
					}
					cout << i << endl;
					for (int k = i-1; k >= 0; k--) {
						for (int j = 0; j < 16; j++) {
							Field[j][k+1] = Field[j][k];
							Field_shape[j][k+1].setFillColor(Field_shape[j][k].getFillColor());
							Field[j][k] = Color::White;
							Field_shape[j][k].setFillColor(Color::White);
						}
					}
				}
				a = 0;
			}
			call_random_func();
		}

		sleep(milliseconds(10));
	}
	







	for  (int i = 0; i < 16; i++)
	{
		delete[] Field[i];
		delete[] Field_shape[i];
	}

	delete [] Field;
	delete [] Field_shape;

}