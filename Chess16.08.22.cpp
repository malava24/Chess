#include <iostream>
#include "Figure.h"
#include "Horse.h"
#include "King.h"
#include "ChessField.h"


int main()
{

	int posX = 0;
	int posY = 0;
	std::string figurled;

	ChessField field;
	
	field.ShowBoard();
	while (true) {
		std::cout << '\n' << " example: 'horse white - hw, king white - kw ...' " << std::endl;
		std::cout << "Enter 'id' and new position(posX, poxY , (hw, hb, kw, kb)" << std::endl << std::endl;

		std::cin >> posX >> posY >> figurled;

		if (figurled == "hw") {
			std::cout << field.Step(field.GetFigureHorseWhite(), posX, posY);

		}
		else if (figurled == "hb") {
			std::cout << field.Step(field.GetFigureHorseBlack(), posX, posY);
		}
		else if (figurled == "kw") {
			std::cout << field.Step(field.GetFigureKingWhite(), posX, posY);
		}
		else if (figurled == "kb") {
			std::cout << field.Step(field.GetFigureKingBlack(), posX, posY);
		}
		else {
			std::cout << "Unknown id-figure, try again" << std::endl;
		}

		field.ShowBoard();

	}

}

