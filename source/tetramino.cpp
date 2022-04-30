#include <SFML/Graphics.hpp>
#include "../headers/tetramino.h"

class tetramino{
	int x;
	int y;
	int color;

	void moving (int x, int y){
	
		x++;
		y--;

	};

	void rotate (int x, int y){

		x--;
		y++;

	};

}
