#include "../headers/Piece.h"

Piece::Piece () :
x (0),
y (0),
valeur (0),
statut (ACTIF) {}

Piece::~Piece () {}

void deplacer (int x,int y) {
    this.x = x;
    this.y = y;
}
